#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}
