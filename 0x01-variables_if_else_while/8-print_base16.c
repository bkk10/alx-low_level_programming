#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 always
 *
 */

int main(void)
{
int num;
char letter;

for (num = 0; num < 10; num++)
{
	putchar(num + '0');
}
for (letter = 'a'; letter <= 'f'; letter++)
{
	putchar(letter);
}
putchar('\n');
return (0);
}
