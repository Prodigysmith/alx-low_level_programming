#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations
 *              of three digits with specified format.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            for (k = j + 1; k < 10; k++)
            {
                putchar(i + '0');
                putchar(',');
                putchar(' ');
                putchar(j + '0');
                putchar(',');
                putchar(' ');
                putchar(k + '0');

                if (!(i == 0 && j == 1 && k == 2))
                {
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');
    return (0);
}
