#include "main.h"

/**
 * _isalpha - function used to check for alphapet or not
 *
 * @c: input
 *
 * Return: retun 1 if c is alphapet  otherwise 0 (success)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
