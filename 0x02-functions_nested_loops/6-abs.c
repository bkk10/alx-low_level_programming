#include <stdio.h>

/**
 * _abs - main function
 *
 * @num: character
 * Return: 0 always
 *
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		return (num);
	}
	putchar('\n');
}
