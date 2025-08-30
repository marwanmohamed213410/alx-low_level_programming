#include <stdio.h>

/**
 * main - entry point
 *
 * description: finds and prints the sum of the even-valued terms
 *
 * Return: 0 (success)
*/
int main(void)
{
	unsigned long num1 = 1, num2 = 2, nextNum;
	unsigned long sum = 2;

	while (1)
	{
		nextNum = num1 + num2;

		if (nextNum >= 4000000)
			break;
		if ((nextNum % 2) == 0)
			sum += nextNum;

		num1 = num2;
		num2 = nextNum;
	}
	printf("%lu\n", sum);
	return (0);
}
