#include <stdio.h>
#include <math.h>

int main(void)
{
	int i, num = 29;

	if(num < 2)
	{
		printf("not prime \n");
	}
	else
	{
		for(i = 2; i <= sqrt(num); i++)
		{
			if(num % i == 0)
			{
				printf("not prime\n");
			}
		}
		printf("prime\n");
	}
}