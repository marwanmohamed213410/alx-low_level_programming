#include "main.h"

/**
 * print_diagonal - function to drwa line
 *
 * @n: is the number of times the character \ should be printed
*/
void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space < i; space++)
				_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		}
	}
}
