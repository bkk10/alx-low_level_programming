#include <stdio.h>

/**
 * print_alphabet - main function
 *
 * Return: 0 always
 *
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
