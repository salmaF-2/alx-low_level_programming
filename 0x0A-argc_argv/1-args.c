#include "main.h"
/**
 * main -  program that prints the number of arguments
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
printf("%i\n", argc - 1);
(void)argv;
return (0);
}
