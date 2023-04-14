#include "main.h"
/**
 * multiply_numbers - Function to multiply two positive numbers
 * @num1: number 1
 * @num2: number 2
 * Return: 0 or 98 or result
 */
void multiply_numbers(const char *num1, const char *num2)
{
int len1 = strlen(num1);
int len2 = strlen(num2);
int len = len1 + len2;
int *result = calloc(len, sizeof(int));
if (result == NULL)
{
exit(1);
}
for (int i = len1 - 1; i >= 0; i--)
{
for (int j = len2 - 1; j >= 0; j--)
{
int mul = (num1[i] - '0') * (num2[j] - '0');
int sum = result[i + j + 1] + mul;
result[i + j + 1] = sum % 10;
 result[i + j] += sum / 10;
}
}
int i = 0;
while (i < len - 1 && result[i] == 0)
{
i++;
}
printf("%s\n", i == len - 1 ? "0" : "");
for (; i < len; i++)
{
printf("%d", result[i]);
}
printf("\n");
free(result);
}
/**
 * main - check
 * @argc: number of cmd line arg
 * @argv: cmd line arg
 * Return 1 or 0
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error");
return 1;
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;
printf("%d\n", result);
return 0;
}
multiply_numbers(argv[1], argv[2]);
return 0;
}
