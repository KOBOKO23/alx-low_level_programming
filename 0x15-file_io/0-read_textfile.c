#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t length, len;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	length = read(fd, buffer, letters);
	close(fd);
	if (length == -1)
	{
		free(buffer);
		return (0);
	}
	len = write(STDOUT_FILENO, buffer, length);
	free(buffer);
	if (length != len)
		return (0);
	return (len);
}
