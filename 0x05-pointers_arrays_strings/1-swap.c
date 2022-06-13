#include "main.h"

/**
 * swap_int - swap the values of integers n and m
 *@n: N pointer
 *@m: M pointer
 * Return: void means correct 
 */
void swap_int(int *n, int *m)
{
int o;

o = *n;
*n = *m;
*m = o;
}
