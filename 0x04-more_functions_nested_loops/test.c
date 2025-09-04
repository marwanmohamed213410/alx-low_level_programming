#include <stdio.h>

/**
 * print_triangle - function to print triangle
 *
 * @size: input
*/

int main()
{
	int a, b;

	if (10 <= 0)
	{
		printf("\n");
	}
	else
	{
		for (a = 1; a <= 10; a++)
		{
			for (b = a; b < 10; b++)
			{
				printf(" ");
			}
			for (b = 1; b <= a; b++)
			{
				printf("#");
			}
			printf("\n");
		}
	}
}