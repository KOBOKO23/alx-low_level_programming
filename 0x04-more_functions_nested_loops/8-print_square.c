#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of width and length
 * Return: a square composed of '#'
 */
void print_square(int size)
{
	int width, length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (width = 1; width <= size; width++)
		{
			_putchar('#');
			for (length = 2; length <= size; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
