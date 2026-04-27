#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i;
char x[letters];
int fp = open(filename, O_RDONLY);
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
