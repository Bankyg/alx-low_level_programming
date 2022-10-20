#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - this function to test positive or negative
 * @i: integer
 * Return: 0
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
}
