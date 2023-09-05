#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - main
 *
 * @filename: file name
 *
 * @letters: no of letters
 *
 * Return: output
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t file_read, file_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	file_read = read(fp, buffer, letters);
	if (file_read == -1)
	{
		close(fp);
		free(buffer);
		return (0);
	}
	file_write = write(STDOUT_FILENO, buffer, file_read);
	close(fp);
	free(buffer);
	if (file_write == -1 || file_read != file_write)
	{
		return (0);
	}
	return (file_write);
}
