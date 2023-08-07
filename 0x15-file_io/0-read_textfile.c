#include "main.h"
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fod;
	ssize_t wod;
	ssize_t tod;

	fod = open(filename, O_RDONLY);
	if (fod == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tod = read(fod, buf, letters);
	wod = write(STDOUT_FILENO, buf, tod);

	free(buf);
	close(fod);
	return (wod);
}

