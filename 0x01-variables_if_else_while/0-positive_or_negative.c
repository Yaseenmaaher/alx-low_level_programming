#include <stdlib.h>
#include <time.h>
/*more headers goes there */
#include <stdio.h>
/*betty style doc for function for function main goes there */

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	printf("/n");
	return (0);
}
