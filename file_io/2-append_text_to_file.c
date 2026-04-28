#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * append_text_to_file - check the code
 * @filename: file
 * @text_content: chars
 * Return: Always EXIT_SUCCESS.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int i = 0;
int error;
int fp = open(filename, O_RDWR | O_APPEND, 0600);
if (filename == NULL)
{
return (-1);
}
if (fp == -1)
{
return (-1);
}
if (text_content != NULL)
{
while (text_content[i] != '\0')
{
i++;
}
}


error = write(fp, text_content, i);
if (error == -1)
{
return (-1);
}

close(fp);

return (1);
}
