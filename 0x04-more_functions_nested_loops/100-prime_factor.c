#include <stdio.h>
#include <math.h>

int is_prime(int num);
long largest_prime_factor(long int num);

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
	long num = 612852475143;
	long largest_factor = largest_prime_factor(num);

	printf("%ld\n", largest_factor);
	return (0);
}

/**
 * is_prime - function
 *
 * @num: number
 *
 * Return: 1 (prime)
*/
int is_prime(int num)
{
	int i;

	if (num < 2)
		return (0);

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - function
 *
 * @num: number
 *
 * Return: largest_factor
*/
long largest_prime_factor(long int num)
{
	long int i;
	long int largest_factor = -1;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
			{
				largest_factor = i;
			}

			if (is_prime(num / i))
			{
				largest_factor = num / i;
			}
		}
	}
	return (largest_factor);
}
