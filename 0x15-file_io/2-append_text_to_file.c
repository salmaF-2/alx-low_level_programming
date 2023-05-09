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
FILE *f = fopen(filename, "a");
size_t length = strlen(text_content);
if (filename == NULL)
return (-1);
if (f == NULL)
return (-1);
if (text_content == NULL)
{
fclose(f);
return (1);
}
if (text_content != NULL)
{
fwrite(text_content, sizeof(char), length, f);
}
fclose(f);
return (1);
}
