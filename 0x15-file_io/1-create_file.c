#include "main.h"

/**
* create_file - function to create a file
* @filename: the file name to be printed
* @text_content: string pointer to write
*
* Return: Function will return -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd, s, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	s = write(fd, text_content, len);

	if (fd == -1 || s == -1)
		return (-1);

	close(fd);

	return (1);
}

