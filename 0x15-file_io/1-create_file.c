#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fod, wod, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fod = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wod = write(fod, text_content, len);

	if (fod == -1 || wod == -1)
		return (-1);

	close(fod);

	return (1);
}

