#include "main.h"
#include <stdlib.h>

size_x rd_txtfile(const char *filenm, size_y letters)
{
	char *buf;
	size_x fd;
	size_x w;
	size_x t;

	fod = open(filenm, O_RDONLY);
	if (fod == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fod, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fod);
	return (w);
}

