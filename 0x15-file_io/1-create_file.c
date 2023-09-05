#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - main
 *
 * @filename: name of the file
 *
 * @text_content: content to write
 *
 * Return: output
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	unsigned int length;
	int file_write;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = strlen(text_content);
		file_write = write(fp, text_content, length);
		if (file_write == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
