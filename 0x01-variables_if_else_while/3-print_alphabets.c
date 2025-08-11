#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:alphabet in lowercase, and then in uppercase using putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i;

	/* ASCII value of A=65 and Z=90 */
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}


    /* ASCII value of a=97 and z=122 */
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
