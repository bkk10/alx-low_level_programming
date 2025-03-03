#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table, starting from 0
 */
void times_table(void)
{
    int num, i, result;

    for (num = 0; num < 10; num++)
    {
        for (i = 0; i < 10; i++)
        {
            result = num * i;

            if (i == 0)
                printf("%d", result);
            else
                printf(", %2d", result);
        }
        printf("\n");
    }
}
