#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
int m = i * j;
if (j == 0)
{
_putchar(48);
}
if (m < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + 48);
}
else
{
_putchar(',');
_putchar(' ');
_putchar(m / 10 + 48);
_putchar(m % 10 + 48);
}
}
_putchar('\n');
}
}
