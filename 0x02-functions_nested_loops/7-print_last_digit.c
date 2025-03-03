#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - main function
 *
 * @num: character
 *
 * Return: 0
 *
 */

int print_last_digit(int num)
{
	int last = num % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}
