#include <stdio.h>

/**
 * printing the size of a pointer (in bytes)
 *
 * Return: (0)
 */
int main(void)
{
	char *c;
	int *n;

	printf("Size of a 'char' pointer: %lu\n", sizeof(c));
	printf("Size of an 'int' pointer: %lu\n", sizeof(n));
	return (0);
}
