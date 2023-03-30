#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, g;
for (i = n - 1; i >= n / 2; i--)
{
g = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = g;
}
}
