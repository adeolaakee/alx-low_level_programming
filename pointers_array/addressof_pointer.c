#include <stdio.h>

/**
 * prints the address of a pointer
 *
 * Return: Always (0)
 */

int main(void)
{
	int *n;
	char *c;

	printf("This is the address of variable n pointing to int n: %p\n", &n);
	printf("Address of variable c pointing to char c: %p\n", &c);
	return (0);
}
