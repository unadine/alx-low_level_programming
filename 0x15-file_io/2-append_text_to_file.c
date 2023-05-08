#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file to have text appended to
 * @text_content: text to be appended to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fle, k;

	fle = open(filename, O_APPEND | O_WRONLY);
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	if (fle == -1)
	{
		return (-1);
	}
	for (k = 0; text_content[k] != '\0'; k++)
		;
	if (write(fle, text_content, k) == -1)
	{
		return (-1);
	}
	close(fle);
	return (1);
}
