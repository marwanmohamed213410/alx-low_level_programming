#include <stdio.h>

/**
 * main -Enrty point
 *
 * Description: print lowercase alphabet using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;
	/* ASCII value of a=97 and z=122 */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
