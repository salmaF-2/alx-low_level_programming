#include "main.h"
/**
 * main - program that prints all arguments it receives.
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
