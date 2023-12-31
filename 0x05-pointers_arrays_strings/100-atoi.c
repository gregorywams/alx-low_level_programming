#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int main(void)
{
        int r = 0, c = 0;

        time_t t;

        srand((unsigned int) time(&t));
        while (c < 2772)
        {
                r = rand() % 128;
                if ((c + r) > 2772)
                        break;
                c = c + r;
                printf("%c", r);
        }
        printf("%c\n", (2772 - c));
        return (0);
}
