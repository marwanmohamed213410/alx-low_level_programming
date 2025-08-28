#include "main.h"

/**
 * print_alphabet_x10 - function used to print alphabet in lowercase x 10
 *
 */
void print_alphabet_x10(void)
{
	int i, ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
