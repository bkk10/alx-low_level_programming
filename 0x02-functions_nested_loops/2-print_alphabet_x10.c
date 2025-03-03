#include <stdio.h>

/**
 * print_alphabet_x10 - main function
 *
 * Return: 0 always
 *
 */

void print_alphabet_x10(void)
{
	char letter;
	int count = 1;

	for (count = 1; count <= 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
		}
		putchar('\n');
	}
}
