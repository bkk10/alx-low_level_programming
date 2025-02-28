#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - main function
 *
 * Return: 0 always
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %d and % d is greater than 5", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and it less than 6 and not 0", n, last);
	}
	printf("\n");
	return (0);
}
