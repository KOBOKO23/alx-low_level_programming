/*
 * File: 7-print_tebahpla.c
 * Auth: Philip Koboko
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 - (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
