#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index -  function that searches for an integer.
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function to be used to compare values
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
