#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - main
 *
 * @filename: name of the file
 *
 * @text_content: content to write to file
 *
 * Return: output
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, file_write;
	unsigned int len;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		file_write = write(fp, text_content, len);
		if (file_write == -1)
		{
			close(fp);
			return (-1);
		}
		return (1);
	}
	return (-1);
}
