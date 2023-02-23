#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 0; j < 10; j++)
		{
			k = i * j;
			_putchar(44);
			_putchar(32);
			if (k < 10)
			{
				_putchar(32);
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
