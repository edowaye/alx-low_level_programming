#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  *read_textfile - function that reads a text file
  *and prints it to the POSIX stdout
  *
  *@filename: name of file to be read
  *@letters: number of letters it should read and print
  *
  *Return: number of letters or 0
  *
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char ch;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		close(fd);
		return (0);
	}
