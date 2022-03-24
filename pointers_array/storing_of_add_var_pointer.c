#include <stdio.h>

/**
 * storing the address of var into a ponter
 *
 * Return (0)
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	
	printf("Address of variable 'n': %p\n", &n);
	printf("Value of 'p' : %p\n", p);
	return (0);
}
