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
FILE *fp;
char *buffer;
ssize_t total_letters = 0;
size_t readl;
if (filename == NULL)
return (0);
fp = fopen(filename, "r");
if (fp == NULL)
return (0);
buffer = malloc((letters + 1) * sizeof(char));
if (buffer == NULL)
{
fclose(fp);
return (0);
}
readl = fread(buffer, sizeof(char), letters, fp);
if (readl > 0)
{
total_letters += readl;
buffer[readl] = '\0';
fprintf(stderr,"%s", buffer);
}
free(buffer);
fclose(fp);
return (total_letters);
}
