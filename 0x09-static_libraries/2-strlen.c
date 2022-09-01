#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer that will be changed into int
 *
 *Return: void means the answer is correct
 */

int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
