#include <stdio.h>
/**
 * main - main function
 * Return: nothing
 */
int main(void)
{
int first = 1, second = 2, next;
int count = 0;
printf("%d, %d", first, second);
count += 2;
while(count < 98)
{
next = first + second;
first = second;
second = next;
printf(", %d", next);
count++;
}
printf("\n");
return (0);
}
