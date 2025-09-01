#include "main.h"

/**
 * more_numbers - function to print 10 time the numbers
*/
void more_numbers(void)
{
	int i, j, n;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;

			if (n > 9)
			{
				_putchar('1');
				n = j % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
