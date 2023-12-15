/*
 * File: 8-print_base16.c
 * Auth: Philip Koboko
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0. - (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
