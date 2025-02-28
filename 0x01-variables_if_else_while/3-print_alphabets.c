#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 always
 *
 */

int main(void)
{
	char i, j;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
