#include <stdio.h>

/**
 * _islower - main function
 *
 * @c: character
 *
 * Return: 0 always, 1 if error
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
