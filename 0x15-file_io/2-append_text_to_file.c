#include "main.h"


/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: 1 if the file exists and -1 if the file does not exist
 */


int append_text_to_file(const char *filename, char *text_content)

{
	int fildes, err, len;

	fildes = err = len = 0;

	if (!filename)
		return (-1);

	else if (!text_content || !text_content[0])
		return (1);

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (fildes < 0)
		return (-1);

	while (text_content[len])
		len++;

	err = write(fildes, text_content, len);

	if (err < 0)
		return (-1);

	close(fildes);
	return (1);
}
