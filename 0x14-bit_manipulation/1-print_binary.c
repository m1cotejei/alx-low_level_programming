#include "main.h"

void print_binary(unsigned long int li)
{
	int li, count = 0;
	unsigned long int current;

	for (li = 63; li >= 0; li--)
	{
		current = n >> li;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

