#include "main.h"
#include <string.h>

/**
 *create_file - creates a file
 *@filename: name of file
 *@text_content:string to write to file
 *
 *Return: 1 if file exists and -1 if file doesnt exist
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;
	mode_t mode = S_IRUSR | S_IWUSR;
	
	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == 0)
		return (-1);

	if (text_content == NULL)
		bytes_written = write(fd, text_content, strlen(text_content));
	else
		bytes_written = 0;

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

