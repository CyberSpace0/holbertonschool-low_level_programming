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
if (argc > 1)
{
printf("%i\n", argv[1] * argv[2]);
}

return (0);
}
