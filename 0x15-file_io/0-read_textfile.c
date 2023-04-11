#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: pointer to file 
 *@letters: number of letters it should read and print
 *
 * Return: actual numbers of letters that could be read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	/*open file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	/*allocate memory for buffer*/

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*read the content of the file*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		return (0);
	}

	/*write the content of the file to the standard output*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
	{
		free(buffer);
		return (0);
	}

	/*close file and free buffer*/
	close(fd);
	free(buffer);

	return (bytes_written);


}

