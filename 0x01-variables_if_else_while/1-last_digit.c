#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	while (n > 0)
	{
		last = n / 10;
		n %= 10;
	}
	printf("%d and is ", last);
	if (last == 0)
	{
		printf("0");
	}
	else if (last > 5)
	{
		printf("greater than 5");
	}
	else
	{
		printf("less than 6 and not 0");
	}
	return (0);
}

