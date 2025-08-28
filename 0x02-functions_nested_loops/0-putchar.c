#include "main.h"

/**
 * main - entry point
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char str[9] = "_putchar";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
