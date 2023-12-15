/*
 * File: 101-print_comb4.c
 * Auth: Philip Koboko
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        separated by comma, in ascending order followed by a white space.
 *
 * Return: Always 0 - (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; k++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

				if (i == 7 && j == 8 && k == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
