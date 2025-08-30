#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long num1 = 1, num2 = 2;
	unsigned long n1_h = 0, n1_l = 1;
	unsigned long n2_h = 0, n2_l = 2;
	unsigned long high, low;
	const unsigned long max = 1000000000;
	int i;

	for (i = 1; i <= 98; i++)
	{
		if (i == 1)
			printf("%lu, ", num1);
		else if (i == 2)
			printf("%lu, ", num2);
		else
		{
			low = n1_l + n2_l;
			high = n1_h + n1_h;

			if (low >= max)
			{
				low -= max;
				high++;
			}

			if (high > 0)
				printf("%lu%09lu, ", high, low);
			else
				printf("%lu, ", low);

			n1_h = n2_h;
			n1_l = n2_l;
			n2_h = high;
			n2_l = low;
		}
	}
	printf("\n");
	return (0);
}
