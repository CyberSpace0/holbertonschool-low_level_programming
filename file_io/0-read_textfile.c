#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * read_textfile - check the code
 * @filename: file
 * @letters: chars
 * Return: Always EXIT_SUCCESS.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i;
char *x;
int fp = open(filename, O_RDONLY);
x = malloc(letters + 1);
if (x == NULL)
{
return (0);
}
if (filename == NULL)
{
return (0);
}
if (fp == -1)
{
return (0);
}


i = read(fp, x, letters);
x[i] = '\0';


write(STDOUT_FILENO, x, i);

close(fp);

return (i);
}
