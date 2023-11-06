#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This is the main function of the program. It prints the name
 * of the source file using the predefined macro __FILE__.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
