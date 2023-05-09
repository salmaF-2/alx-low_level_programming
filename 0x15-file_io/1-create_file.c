#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int F;
if (filename == NULL)
return (-1);
if (text_content == NULL)
text_content = "";
F = open(filename, O_CREAT | O_WRONLY |
O_TRUNC, S_IRUSR | S_IWUSR);
if (F == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t l = write(F, text_content, strlen(text_content));
if (l == -1)
{
close(F);
return (-1);
}
}
close(F);
return (1);
}
