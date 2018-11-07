#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file to create
 * @text_content: content to append to the file
 * Return: 1 if successful, -1 if it failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length, file, size;

	if (!filename || !text_content)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	for (length = 0; text_content[length];)
		length++;
	size = write(file, text_content, length);
	if (size < 0)
		return (-1);
	close(file);
	return (1);
}

