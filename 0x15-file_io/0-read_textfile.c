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
ssize_t f;
char *buffer;
ssize_t i;
ssize_t j;
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
j = read(f, buffer, letters);
i = write(STDOUT_FILENO, buffer, j);
free(buffer);
close(f);
return (i);
}
