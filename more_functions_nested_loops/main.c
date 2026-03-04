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
<<<<<<< HEAD
    int x;
    int i[5] = {24,5,13,542,541};
    for (x = 0; x < 5; x++)
    {
        printf(" %d => %p\n",i[x],&i[x]); 
    }
    printf(" %p \n",i);
    printf(" %p \n",i+1);
    printf(" %p \n",i+2);
       
=======
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
>>>>>>> 77b9fcafa39d9f0a5df5f1bd64334deed82c0755
    return (0);
}

