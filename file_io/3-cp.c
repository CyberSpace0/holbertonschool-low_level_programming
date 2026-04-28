#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define _POSIX_C_SOURCE 200809L
#include "main.h"

void print_error_read(char *file);
void print_error_write(char *file);

/**
 * main - check the code
 * @argc: args count
 * @argv: args vector
 * Return: Always EXIT_SUCCESS.
 */
int main(int argc, char *argv[])
{
int data, error, serror;
int from, to;
char info[3000];

if (argc < 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

from = open(argv[1], O_RDONLY);
if (from < 0)
{
print_error_read(argv[1]);
exit(98);
}


data = read(from, info, 3000);
if (data < 0)
{
print_error_read(argv[1]);
exit(98);
}

to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
if (to < 0)
{
print_error_write(argv[2]);
exit(99);
}

error = write(to, info, data);
if (error == -1)
{
print_error_write(argv[2]);
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
 * print_error_read - prints read error
 */
void print_error_read(char *file)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", file);
}

/**
 * print_error_write - prints write error
 */
void print_error_write(char *file)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
}
