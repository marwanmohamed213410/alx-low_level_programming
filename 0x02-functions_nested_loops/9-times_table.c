#include "main.h"

/**
 * times_table - function used to print  the 9 times table
 *
*/

void times_table(void)
{
	int i, mul, result;

	for (i = 0; i <= 9; i++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			result = i * mul;

			if (mul == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result > 9)
				{
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((result) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
