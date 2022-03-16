#include "main.h"
/**
 * times_table - prints multiplication time from
 * 0 to 9
 *
 */

void times_table(void)
{
	int n, j, k;

	n = 0;

	while (n <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			k = j * n;
			j++;

			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
		n++;
	}
}
