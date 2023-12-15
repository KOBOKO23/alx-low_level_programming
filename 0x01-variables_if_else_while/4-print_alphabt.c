/*
 * File: 4-print_alphabt.c
 * Auth: Philip Koboko
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e.
 *
 * Return: Always 0 - (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
