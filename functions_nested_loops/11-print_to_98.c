#include "main.h"
#include <stdio.h>
/**
* add - entry point
* @n: int value
* Return: always (0) success
*/
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
if (i == 98)
{
printf(" %i",i);
}
else if(i == n)
{
printf("%i,",i);
}
else
{
printf(" %i,",i);
}

}
printf("\n");

}
