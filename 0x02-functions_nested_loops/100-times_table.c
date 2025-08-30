#include "main.h"

/**
 * print_times_table - function to print the n times table
 *
 * @n: input
*/
void print_times_table(int n)
{
	int i, mul, result;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (mul = 0; mul <= n; mul++)
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
					if (result <= 9)
						_putchar(' ');
					if (result <= 99)
						_putchar(' ');

					if (result >= 100)
					{
						_putchar((result / 100) + '0');
						_putchar(((result / 10) % 10) + '0');
					}
					else if (result >= 10 && result <= 99)
					{
						_putchar((result / 10) + '0');
					}
					_putchar((result % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
