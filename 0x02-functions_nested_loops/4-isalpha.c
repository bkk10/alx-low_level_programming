#include <stdio.h>

/**
 * _isalpha - main function
 *
 * @c: character
 *
 * Return: 0 and 1 if passable
 *
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
