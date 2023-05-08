#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: content to be in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fle;
	int len;
	int k;

	fle = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filename == NULL)
	{
		return (-1);
	}
	if (fle == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (k = 0; text_content[k] != '\0'; k++)
			;
		len = write(fle, text_content, k);
		if (len == -1)
		{
			return (-1);
		}
	}
	close(fle);
	return (1);
}
