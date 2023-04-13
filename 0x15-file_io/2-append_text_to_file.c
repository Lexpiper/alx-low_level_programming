#include "main.h"


/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: name of the file
 *@text_content: string to be added to the end of the line
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_byte, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		w_byte = write(fd, text_content, i);

		if (w_byte == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
