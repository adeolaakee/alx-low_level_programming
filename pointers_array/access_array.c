#include <stdio.h>

/**
 * accessing array in c
 */
int main(void)
{
	int arr[5] = {98, 100, 500, 300, 200};
	printf("Value of arr[0]: %d\n", arr[0]);
	printf("Value of arr[1]: %d\n", arr[1]);
	printf("Value of arr[2]: %d\n", arr[2]);
	printf("Value of arr[3]: %d\n", arr[3]);
	printf("Value of arr[4]: %d\n\n\n", arr[4]);
	printf("Address of arr[0]: %p\n", &(arr[0]));
	printf("Address of arr[1]: %p\n", &(arr[1]));
	printf("Address of arr[2]: %p\n", &(arr[2]));
	printf("Address of arr[3]: %p\n", &(arr[3]));
	printf("Address of arr[4]: %p\n", &(arr[4]));
	return (0);
}
