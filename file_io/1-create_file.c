#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * create_file - check the code
 * @filename: file
 * @letters: chars
 * Return: Always EXIT_SUCCESS.
 */
int create_file(const char *filename, char *text_content)
{
int i = 0;
char x[100];
int fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
if (filename == NULL)
{
return (-1);
}
if (fp == -1)
{
return (-1);
}
while (text_content[i] != '\0')
{
i++;
}

write(fp, text_content, i);

close(fp);

return (1);
}
