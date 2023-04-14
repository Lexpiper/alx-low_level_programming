	#include "main.h"

	char *allocate_buffer(char *filename);
	void close_file_descriptor(int fd);

	/**
	 * allocate_buffer - Entry point
	 * Description: Allocates bytes to be used by the buffer.
	 * @filename: pointer to Name of the file
	 *
	 * Return: Buffer allocated
	 */

	char *allocate_buffer(char *filename)
	{
		char *buffer;

		/* Allocate 1024 bytes of memory for buffer */
		buffer = malloc(sizeof(char) * 1024);

		if (!buffer)
		{
			/* Prints error mesage if buffer allocation failes */
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
		return (buffer);
	}

	/**
	 * close_file_descriptor - Closes file
	 * @fd: File description file
	 */

	void close_file_descriptor(int fd)
	{
		int result;

		/* Close file descriptor */
		result = close(fd);
		if (result == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}

	/**
	 * main - Entry point
	 * Description: Copies content within file to another file
	 * @argc: Number of arguments on command line
	 * @argv: array of strings on command line
	 *
	 * Return: 0 on success
	 */

	int main(int argc, char *argv[])
	{
		int fp, file, bytes_Read, my_write;
		char *buffer;

		if (argc != 3)
		{
			dprintf(STDERR_FILENO, "Usage: cp fp file\n");
			exit(97);
		}
		buffer = allocate_buffer(argv[2]);
		/* open file in Read only mode*/
		fp = open(argv[1], O_RDONLY);
		/* Read 1024 bytes from source file into buffer */
		bytes_Read = read(fp, buffer, 1024);
		/* Open destination file for writing -rw-r--r-, with those permissions */
		file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
		do
		{
			if (fp == -1 || bytes_Read == -1)
			{
				dprintf(STDERR_FILENO,
						"Error: Can't read from file %s\n", argv[1]);
				free(buffer);
				exit(98);
			}
			my_write = write(file, buffer, bytes_Read);

			if (file == -1 || my_write == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				free(buffer);
				exit(99);
			}
			bytes_Read = read(fp, buffer, 1024);
			file = open(argv[2], O_WRONLY | O_APPEND);
		} while (bytes_Read > 0);

		free(buffer);
		close_file_descriptor(fp);
		close_file_descriptor(file);

		return (0);
	}

