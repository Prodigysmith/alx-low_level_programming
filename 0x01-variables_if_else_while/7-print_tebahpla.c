#include <stdio.h>

/**
 * main - main fucntion
 *
 * Return: is not always (0)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	printf("\n");
	return (0);
}
