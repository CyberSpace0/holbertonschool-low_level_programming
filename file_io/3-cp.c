#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define _POSIX_C_SOURCE 200809L
#include "main.h"



/**
 * main - check the code
 * @argc: file
 * @argv: chars
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
size_t i = 0;
char info[1024];
int error,data,serror;
int from,to;
if (argc < 2)
{
write(STDERR_FILENO,"Usage: cp file_from file_to\n",28);
exit(97);
}
from = open(argv[1], O_RDONLY, 0664);
if (from < 0)
{
write(STDERR_FILENO,"Error: Can't read from file ",28);
for (i = 0; i < strlen(argv[1]); i++)
{
_putchar(argv[1][i]);
}
_putchar('\n');
exit(98);
}
data = read(from, info, 1024);
if (data < 0)
{
write(STDERR_FILENO,"Error: Can't read from file ",28);
for (i = 0; i < strlen(argv[1]); i++)
{
_putchar(argv[1][i]);
}
_putchar('\n');
}
to = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
if (to < 0)
{
write(STDERR_FILENO,"Error: Can't write to ",28);
for (i = 0; i < strlen(argv[2]); i++)
{
_putchar(argv[2][i]);
}
_putchar('\n');
exit (99);
}
error = write(to, info, data);
if (error == -1)
{
write(STDERR_FILENO,"Error: Can't write to ",28);
for (i = 0; i < strlen(argv[2]); i++)
{
_putchar(argv[2][i]);
}
_putchar('\n');
exit (99);
}

serror = close(to);
if (serror == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
exit(100);
}
serror = close(from);
if (serror == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
exit(100);
}


return (1);
}
