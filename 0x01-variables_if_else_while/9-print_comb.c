#include <stdio.h>

/**
 * main -Entry point
 *
 * Description : combination of digit
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
