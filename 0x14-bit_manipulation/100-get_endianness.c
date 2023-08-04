#include "main.h"

int get_endianness(void)
{
	unsigned int w = 1;
	char *m = (char *) &w;

	return (*m);
}

