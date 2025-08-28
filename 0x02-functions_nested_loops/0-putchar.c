#include "main.h"

int main(void)
{
    int i;
    char str[30] = "_putchar";

    for(i = 0; i <= 7; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');

    return(0);
}