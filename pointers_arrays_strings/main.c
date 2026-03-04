#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int x;
    int i[5] = {24,5,13,542,541};
    for (x = 0; x < 5; x++)
    {
        printf(" %d => %p\n",i[x],&i[x]); 
    }
    printf(" %p \n",i);
    printf(" %p \n",i+1);
    printf(" %p \n",i+2);
       
    return (0);
}

