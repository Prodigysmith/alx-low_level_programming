#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */
int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            putchar(j + '0');
            putchar(' ');
        }
    }
    putchar('\n');
    return 0;
}
