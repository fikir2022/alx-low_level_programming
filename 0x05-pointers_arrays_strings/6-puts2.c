#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: A pointer will be changed to an int
 * 
 * Return: void means the answer is correct 
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] !='\0'; i++)
{
if (i % 2 == 0)
_putchar (str[i]);
}

_putchar ('\n');
}

