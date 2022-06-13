#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer that will be changed to int
 *
 *Return: void means the answer is correct
 */

void print_rev(char *s)
{
int k;

k = 0;
while (s[k] != '\0')
{
k++;
}

for (k = k - 1 ; k >= 0; k--)
{
_putchar (s[k]);
}

_putchar ('\n');
}
