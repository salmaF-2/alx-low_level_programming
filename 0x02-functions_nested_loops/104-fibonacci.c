#include <stdio.h>
/**
 * main - main function
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = 0;
int a = 1, b = 2;
printf("%d, %d, ", a, b);
count += 2;
while (count < 98)
int next = a + b;
printf("%d", next);
count++;
if (count != 98)
printf(", ");
}
a = b;
b = next;
}
printf("\n");
return (0);
}
