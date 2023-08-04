#include "main.h"

unsigned int binary_to_uint(const char *bb)
{
	int i;
	unsigned int dec_val = 0;

	if (!bb)
		return (0);

	for (i = 0; bb[i]; i++)
	{
		if (bb[i] < '0' || bb[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (bb[i] - '0');
	}

	return (dec_val);
}

