#include <stdio.h>

int main (void)
{
    int num1 = 1, num2 = 2, nextNum = 0, i;

    for (i = 1; i <= 50; i++)
    {
        if (i > 3)
        {
            nextNum = num1 + num2;
            num1 = num2;
            num2 = nextNum;
            printf("%d", nextNum);
        }
        else if (i == 1)
            printf("%d", num1);
        else if (i == 2)
            printf("%d", num2);
        
        if (i == 49)
			printf("\n");
		else
			printf(", ");
    }
    return (0);
}