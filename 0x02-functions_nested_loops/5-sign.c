#include <stdio.h>
#include "main.h"

/**
 * print_sign - main function
 *
 * @n: character
 *
 * Return: 1 if grater than 0 else 0 if 0 -1 less
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
