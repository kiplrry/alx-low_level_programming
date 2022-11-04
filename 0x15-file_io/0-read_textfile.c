#include "main.h"
/**
 * read_textfile - read text file and output to POSIX standard output
 * @filename: file descriptor
 * @letters: number of characters
 * Return: w || 0 in case of fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(o);

	return (w);
}

