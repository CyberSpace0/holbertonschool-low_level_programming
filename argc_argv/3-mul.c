#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - entry point
* @argc: length
* @argv: char
* Return: always (0) success
*/
int main(int argc, char *argv[])
{
if (argc > 1)
{
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
}
else
{
printf("Error\n");
}
return (0);
}
