#include "main.h"

/**
 * _isupper - function to check for uppercas char
 *
 * description: check uppercase character
 *
 * @c: input
 *
 * Return: 1 if c is uppercase & 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);

	return (0);
}
