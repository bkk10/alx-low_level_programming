#include "main.h"

/**
 * main - main function
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
