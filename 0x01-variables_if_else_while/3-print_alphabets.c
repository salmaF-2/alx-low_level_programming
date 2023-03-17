#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, h;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (h = 'A'; h <= 'Z'; h++)
putchar(h);
putchar('\n');
return (0);
}
