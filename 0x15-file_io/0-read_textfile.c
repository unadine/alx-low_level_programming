#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the file
 * @letters: number of letters to print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fle;
	char *buffer;
	ssize_t lett_count1, lett_count2;

	if (filename == NULL)
	{
		return (0);
	}
	fle = open(filename, O_RDWR);
	if (fle == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	lett_count1 = read(fle, buffer, letters);
	if (lett_count1 == -1)
	{
		free(buffer);
		return (0);
	}
	lett_count2 = write(STDOUT_FILENO, buffer, lett_count1);
	if (lett_count2 == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fle);
	return (lett_count2);
}
