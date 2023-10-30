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
	int a;
	int b;
	int c;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for b = 0; text_content[b]; b++)
		;

	c = write(a, text_content, c);

	if (a == -1)
		return (-1);

	close(a);

	return (1);
}

