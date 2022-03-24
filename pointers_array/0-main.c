#include <stdio.h>

/**
 * using sizeof to dynamically determine size of types char,int
 * double, long int and unsigned int
 *
 * Return: always (0)
 */
int main(void)
{
	int n;
	
	printf("Size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("Size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("Size of type 'double' on my computer: %lu bytes\n", sizeof(double));
	printf("Size of type 'long double' on my computer: %ld bytes\n", sizeof(long double));
	printf("Size of type 'unsigned int' on my computer: %lu bytes\n", sizeof(unsigned int));
	printf("Size of type 'long int' on my computer: %lu bytes\n", sizeof(long int));
	printf("Size of type of my variable n on my computer: %lu bytes\n",sizeof(n));
	return (0);
}
