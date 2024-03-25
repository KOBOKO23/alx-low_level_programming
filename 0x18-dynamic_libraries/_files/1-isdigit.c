#include "main.h"

/**
*_isdigit - checks if a character is a digit
*@c: character to be treated
*Return: 1 for a digit , 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
