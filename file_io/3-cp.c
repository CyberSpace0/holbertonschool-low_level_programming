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
int i = 0;
char info[3000];
int error,data,serror;
int from,to;
int farg = 0;
int sarg = 0;
if (argc < 3)
{
write(STDERR_FILENO,"Usage: cp file_from file_to\n",28);
exit(97);
}
while (argv[1][farg] != '\0')
{
farg++;
}
while (argv[2][sarg] != '\0')
{
sarg++;
}

from = open(argv[1], O_RDONLY, 0664);
if (from < 0)
{
write(STDERR_FILENO,"Error: Can't read from file ",28);
for (i = 0; i < farg; i++)
{
_putchar(argv[1][i]);
}
_putchar('\n');
exit(98);
}
data = read(from, info, 3000);
if (data < 0)
{
write(STDERR_FILENO,"Error: Can't read from file ",28);
for (i = 0; i < farg; i++)
{
_putchar(argv[1][i]);
}
_putchar('\n');
}
to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (to < 0)
{
dprintf(STDERR_FILENO,"Error: Can't write from file %s\n", argv[2]);
exit (99);
}
error = write(to, info, data);
if (error == -1)
{
dprintf(STDERR_FILENO,"Error: Can't write from file %s\n", argv[2]);
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


return (0);
}
