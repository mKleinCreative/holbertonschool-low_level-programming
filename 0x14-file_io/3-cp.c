#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_err - error for reading file
 * @source: file error where error is being caused.
 */
void read_err(char *source)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
	exit(98);
}

/**
 * read_content - reads a file and puts it into a buffer.
 * @source: file to get information from
 * @buffer: double pointer to buffer storage
 * @desc: file descriptor
 * Return: current size of buffer
 */

static ssize_t read_content(char *source, char **buffer, int desc)
{
	int read_info;

	if (desc < 0)
		read_err(source);
	if (!(*buffer))
		*buffer = malloc(sizeof(char) * 1024);
	if (*buffer == NULL)
		read_err(source);
	read_info = read(desc, *buffer, 1024);
	if (read_info < 0)
	{
		free(*buffer);
		read_err(source);
	}
	return (read_info);
}

/**
 * cp_err - error handler for copy function
 * @content: content from the file to copy
 * @buffer: buffer to store information
 */

void cp_err(char *content, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", content);
	exit(99);
}

/**
 * cp - copies the content of a file to another
 * @content: content from the file to copy
 * @dest: place to copy information to
 * @buffer: buffer to store information
 * @length: length of information to copy.
 */

static void cp(char *content, int dest, char *buffer, int length)
{
	if (dest < 0 || !buffer)
		cp_err(content, buffer);
	if (write(dest, buffer, length) < 0)
		cp_err(content, buffer);
}

/**
 * main - copies one file to another
 * @ac: count of arguments, should always be 3
 * @av: av[1] is copy_from av[2] is copy_to.
 * Return: 0 for success!
 */

int main(int ac, char **av)
{
	int file1, file2, error, read_size;
	char *buffer, *copy_to, *copy_from;

	buffer = NULL;
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_from = av[1];
	copy_to = av[2];
	file1 = open(copy_from, O_RDONLY);
	file2 = open(copy_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	for (read_size = 1; read_size > 0;)
	{
		read_size = read_content(copy_from, &buffer, file1);
		if (!read_size)
			break;
		cp(copy_to, file2, buffer, read_size);
	}

	free(buffer);
	error = close(file1);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file1);
		exit(100);
	}
	error = close(file2);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file2);
		exit(100);
	}
	return (0);
}

