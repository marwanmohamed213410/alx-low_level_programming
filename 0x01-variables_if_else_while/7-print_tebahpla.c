#include <stdio.h>

/**
 * main -Enrty point
 *
 * Description: prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;
	/* ASCII value of a=97 and z=122 */
	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

