#include "main.h"
#include <string.h>

/**
 *create_file - creates a file
 *@filename: name of file
 *@text_content: string to write to file
 *
 *Return: 1 if file exists and -1 if file doesnt exist
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, i = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		bytes_written = write(fd, text_content, i);

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}

