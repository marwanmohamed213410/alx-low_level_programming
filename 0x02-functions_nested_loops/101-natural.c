#include <stdio.h>

int main(void)
{
    int n, sum;

    for (n = 0; n < 1024; n++)
    {
        if ((n % 3) || (n % 5))
        {
            sum += n;
        }
        printf("%d\n", sum);
    }
    return (0);
}