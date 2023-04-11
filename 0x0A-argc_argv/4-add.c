#include "main.h"
/**
 * main - adds positive numbers.
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (!isdigit(*argv[i]) || num <= 0)
{
printf("Error\n");
return (1);
}
sum = sum + num;
}
printf("%i\n", sum);
return (0);
}
