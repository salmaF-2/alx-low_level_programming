#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: content of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int a;
int b;
int l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
a = open(filename, O_WRONLY | O_APPEND);
b = write(a, text_content, l);
if (a == -1 || b == -1)
return (-1);
close(a);
return (1);
}
