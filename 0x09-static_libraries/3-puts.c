#include "main.h"
/**
 *_puts - prints a string
 *@str: A pointer that will be changed to an int
 *
 * Return: void means the answer is correct
 */

void _puts(char *str)
{
char *d;
int e;

d = str;

for (e = 0; d[e]; e++)
{
_putchar (d[e]);
}
_putchar('\n');
}
