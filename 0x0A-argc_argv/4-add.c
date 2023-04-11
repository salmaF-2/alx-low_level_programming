#include "main.h"
/**
 * main - adds positive numbers.
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i, sum = 0, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
sum = sum + atoi(argv[i]);
}
}
printf("%i\n", sum);
return (0);
}
