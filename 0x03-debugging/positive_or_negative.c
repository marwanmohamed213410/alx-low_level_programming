#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */

/**
 * main - Enrty point
 *
 * Description: negarive or positive
 *
 * Return: 0 (success)
*/

void positive_or_negative(int i)
{
	/* your code goes there */
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}

	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else
	{
		printf("%d is zero\n", i);
	}
}
