#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */

int _putchar(char c) {
    return write(1, &c, 1);
}

int print_sign(int n) {
    if (n > 0) {
        _putchar('+');
        return 1;
    } else if (n == 0) {
        _putchar('0');
        return 0;
    } else {
        _putchar('-');
        return -1;
    }
}

int main(void) {
    int result = print_sign(5);
    return (0);
}
