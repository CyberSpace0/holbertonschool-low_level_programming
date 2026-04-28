#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define _POSIX_C_SOURCE 200809L
#include "main.h"

void print_error_read(char *file, int len);
void print_error_write(char *file, int len);

/**
 * main - check the code
 * @argc: args count
 * @argv: args vector
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
int i = 0;
char info[3000];
int error, data, serror;
int from, to;
int farg = 0;
int sarg = 0;

if (argc < 3)
{
write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
exit(97);
}

while (argv[1][farg] != '\0')
farg++;

while (argv[2][sarg] != '\0')
sarg++;

from = open(argv[1], O_RDONLY, 0664);
if (from < 0)
{
print_error_read(argv[1], farg);
exit(98);
}

data = read(from, info, 3000);
if (data < 0)
{
print_error_read(argv[1], farg);
exit(98);
}

to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (to < 0)
{
print_error_write(argv[2], sarg);
exit(99);
}

error = write(to, info, data);
if (error == -1)
{
print_error_write(argv[2], sarg);
exit(99);
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

/**
 * print_error_read - print read error
 */
void print_error_read(char *file, int len)
{
int i;

write(STDERR_FILENO, "Error: Can't read from file ", 28);
for (i = 0; i < len; i++)
_putchar(file[i]);
_putchar('\n');
}

/**
 * print_error_write - print write error
 */
void print_error_write(char *file, int len)
{
int i;

write(STDERR_FILENO, "Error: Can't write to ", 22);
for (i = 0; i < len; i++)
_putchar(file[i]);
_putchar('\n');
}