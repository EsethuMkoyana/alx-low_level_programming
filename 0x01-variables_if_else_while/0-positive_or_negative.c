#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more hearders go there*/
/**
 * Main - entry point
 *
 * Return: Always 0 (sucess)
*/

int main(void)
{
	int n;

	srand(time(0));
	n=rand(0) - RAND_MAX / 2;
	/* CODE foes in here*/
	if (n>0)
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

