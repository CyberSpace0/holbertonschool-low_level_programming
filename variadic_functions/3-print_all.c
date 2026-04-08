#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

int _strlen(const char *str);


/**
 * print_all - check the code
 * @format: int value
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
int len, i = 0;
char *sep;
char *ss;
va_list args;
va_start(args, format);
len = _strlen(format);
sep = ", ";
while (len > i)
{
if (i == len - 1)
{
sep = "";
}
switch (format[i])
{
case 's':
ss = va_arg(args, char*);
if (ss == NULL)
{
ss = "(nil)";
}
printf("%s%s", ss, sep);
break;
case 'c':
printf("%c%s", va_arg(args, int), sep);
break;
case 'i':
printf("%i%s", va_arg(args, int), sep);
break;
case 'f':
printf("%f%s", va_arg(args, double), sep);
break;


}
i++;
}
va_end(args);
printf("\n");
}


/**
 * _strlen - returns the length of a string
 * @str: string to measure
 * Return: length of the string
 */
int _strlen(const char *str)
{
unsigned int len = 0;
while (str && str[len] != '\0')
{
len++;
}
return (len);
}

