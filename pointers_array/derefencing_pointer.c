#include <stdio.h>
/**
 * Dereferncing of pointer
 *
 * Return: (0)
 */

int main(void)
{
	/**
	 * Let’s walk through this example:
	 * int (*p;): * is used in the declaration: p is a pointer to an integer, and so, after dereferencing, *p is an integer.
	 * p = &n;: & takes the address of n. So now p == &n, so (*p) == n
	 *
	 * */

	int n;
	int *p;
	
	n = 98;
	p = &n;

	printf("The value of n: %d\n", n);
	printf("Address of int n: %p\n", &n);
	printf("value of p: %p\n", p);

	*p = 402;
	printf("value of n: %d\n", n);
	return (0);
}
