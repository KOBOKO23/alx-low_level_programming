#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int val, binary_val;

	if (!b)
		return (0);

	ui = 0;

	for (val = 0; b[val] != '\0'; val++)
		;

	for (val--, binary_val = 1; val >= 0; val--, binary_val *= 2)
	{
		if (b[val] != '0' && b[val] != '1')
		{
			return (0);
		}

		if (b[val] & 1)
		{
			ui += binary_val;
		}
	}

	return (ui);
}
