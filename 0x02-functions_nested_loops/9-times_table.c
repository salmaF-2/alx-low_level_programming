#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int m = j * i;
if (j == 0)
{
_putchar('0');
}
else if (m <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(m + '0');
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
