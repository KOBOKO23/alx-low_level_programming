#include "main.h"

/**
*_isupper - checks a  character is uppercase or not
*@c: character to be treated
*Return: 1 for uppercase , 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
