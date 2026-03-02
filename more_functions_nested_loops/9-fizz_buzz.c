#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int main()
{
int i;
for (i = 1; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s ", "FizzBuzz");
}
else if(i % 5 == 0)
{
printf("%s ", "Buzz");
}
else if(i % 3 == 0)
{
printf("%s ", "Fizz");
}
else
{
printf("%i ", i);
}


}
}
printf("%s", "Buzz");
putchar('\n');
return (0);
}
