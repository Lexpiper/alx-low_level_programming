#ifndef _MAIN_H_
#define _MAIN_H_

/*LIBARIES*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/*PROROTYPES*/
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif/*_MAIN_H*/

