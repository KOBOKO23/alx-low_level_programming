#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: number of times to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
