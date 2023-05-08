#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function reads text file,prints it to POSIX
 * @filename: name of file
 * @letters:  number of letters it should read and print
 * Return: number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *F = fopen(filename, "r");
char *buffer = (char *) malloc((letters + 1) * sizeof(char));
ssize_t total_letters = 0;
size_t readl;
if (filename == NULL)
return (0);
if (F == NULL)
return (0);
if (buffer == NULL)
return (0);
while ((readl = fread(buffer, sizeof(char), letters, F)) > 0)
{
if (fwrite(buffer, sizeof(char), readl,
fdopen(STDOUT_FILENO, "w")) != readl)
{
free(buffer);
fclose(F);
return (0);
}
total_letters += readl;
}
free(buffer);
fclose(F);
if (ferror(F))
return (0);
return (total_letters);
}
