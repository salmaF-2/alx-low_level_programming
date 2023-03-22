#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - check positive or negative o r zero
 */
void positive_or_negative(int n)
{
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
}
