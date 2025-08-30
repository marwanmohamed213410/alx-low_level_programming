#include <stdio.h>

/**
 * main - etry point
 *
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long num1 = 1, num2 = 2, nextNum = 0;
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i == 1)
			printf("%lu", num1);
		else if (i == 2)
			printf("%lu", num2);
		else
		{
			nextNum = num1 + num2;
			printf("%lu", nextNum);
			num1 = num2;
			num2 = nextNum;
		}

		if (i == 50)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
