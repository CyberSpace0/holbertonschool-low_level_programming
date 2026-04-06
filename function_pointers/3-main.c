#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
int r;
int (*ptr)(int, int);
if (argc == 3)
{
printf("Error\n");
exit(98);
}
if ((strcmp("%", argv[2]) || strcmp("/", argv[2])) && (atoi(argv[1]) == 0 || atoi(argv[3]) == 0))
{
printf("Error\n");
exit(100);
}
ptr = get_op_func(argv[2]);
if (ptr == 0)
{
printf("Error\n");
exit(99);
}
r = ptr(atoi(argv[1]), atoi(argv[3]));
printf("%i\n", r);


return (0);
}
