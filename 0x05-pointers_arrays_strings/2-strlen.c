#include "main.h"

/**
 *_strlen - string length
 *@s: A pointer that will be changed to int
 *
 * Return: void means the answer is correct
 */

int _strlen(char *s)
{
int a;

a = 0;
while (s[a] != '\0')
{
a++;
}
return (a);
}
