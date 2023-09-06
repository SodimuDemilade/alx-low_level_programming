#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * exit_with_message  - main
 *
 * @input: input
 *
 * @format: input
 *
 */

void exit_with_message(int input, const char *format, ...)
{
	va_list args;

	va_start(args, format);
	dprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(input);
}

/**
 * main - main
 *
 * @argc: argument count
 *
 * @argv: arguments list
 *
 * Return: output
 *
 */

int main(int argc, char *argv[])
{
	char *from_file = argv[1], *to_file = argv[2];
	int fp, fd;
	char buffer[BUFFER_SIZE];
	ssize_t file_read, file_write;

	if (argc != 3)
		exit_with_message(97, "Usage: cp file_from file_to\n");
	fp = open(from_file, O_RDONLY);
	if (fp == -1)
		exit_with_message(98, "Error: Can't read from file %s\n", from_file);
	fd = open(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		exit_with_message(99, "Error: Can't write to file %s\n", to_file);
	while ((file_read = read(fp, buffer, BUFFER_SIZE)) > 0)
	{
		file_write = write(fd, buffer, file_read);
		if (file_write == -1)
			exit_with_message(99, "Error: Can't write to file %s\n", to_file);
	}
	if (file_read == -1)
		exit_with_message(98, "Error: Can't read from file %s\n", from_file);
	if (close(fp) == -1)
		exit_with_message(100, "Error: Can't close fd %d\n", fp);
	if (close(fd) == -1)
		exit_with_message(100, "Error: Can't close fd %d\n", fd);
	return (0);
}
