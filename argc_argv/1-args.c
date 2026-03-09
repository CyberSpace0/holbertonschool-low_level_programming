#include "main.h"
#include <stdio.h>
/**
* main - entry point
* @argc: length
* @argv: char
* Return: always (0) success
*/
int main(int argc, char *argv[])
{
if (argv[0])
{
printf("%i\n", argc - 1);
}

return (0);
}
