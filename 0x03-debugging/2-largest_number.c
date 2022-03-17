#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int main (void)
{
	int a = 5;

	int b = 4;

	int c = 10;

	
		if (( a > b) && (a > c))
		{
			printf("%d", a);
		}
		else  if ((b > a) && (b > c))
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}
	
}


