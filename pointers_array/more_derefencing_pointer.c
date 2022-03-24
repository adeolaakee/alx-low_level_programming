#include <stdio.h>

/**
 * dereferencing pointers, examples with int and char
 *
 * Return: Always (0)
 *
 */

int main (void)
{
	/**
	 * Note that * has a different meaning depending on the context (declaring vs dereferencing pointers).
	 * at declaration, it is used to declare a variable of type pointer to something. Example: int *n;
	 * when used inside the code it is used to dereference pointers. Example *n = 98;
	 *
	 */

	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';

	pp = &c;
	n = 98;
	p = &n;

	printf("value of 'c': %d ('%c')\n", c,c);
	printf("Address of 'c': %p\n", &c);
	printf("value of 'c' : %p\n", pp);
	printf("Value of 'n' : %d\n", n);
	printf("Address of 'n' : %p\n", &n);
	printf("Value of 'p' : %p\n", p);
	
	*p = 402;
	*pp = 'o';

	printf("Value of 'n' : %d\n", n);
	printf("Value of '*pp' : %c\n", *pp);
	printf("Value of 'c' : %d ('%c')\n", c,c);
	printf("Value of *pp : %d ('%c')\n", *pp,*pp);
	return (0);
}
