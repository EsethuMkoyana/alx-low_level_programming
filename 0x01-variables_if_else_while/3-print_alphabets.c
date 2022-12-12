#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/* Main - Entry point */
/* Return: Always 0 (success) */
/* betty style doc for function main goes there */

int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
