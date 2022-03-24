#include <stdio.h>

/**
 * main - addresses of variables
 *
 * Return: (0)
 */
int main(void)
{
	char c;
	int n;

	printf("Address of a variable 'n': %p\n", &n);
	printf("Address of a variable 'c': %p\n", &c);

	return (0);
}
