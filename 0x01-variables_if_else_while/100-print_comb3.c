/*
 * File: 10-print_comb2.c
 * Auth: Philip Koboko
 */

#include <stdio.h>

/**
 * main - Prints a combination of numbers from 00 to 99, separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0 - (success)
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 10; k++)
		{
			putchar((i % 10) + '0');
			putchar((k % 10) + '0');

			if (i == 9 && i == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
