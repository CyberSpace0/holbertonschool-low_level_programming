#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
FILE *fp;

fp = fopen("readme.md","w+");
fputs("ksa--\n", fp);
rewind(fp); 
char x[90];
fgets(x, 90, fp);
printf("%s", x);


fclose(fp);
}
