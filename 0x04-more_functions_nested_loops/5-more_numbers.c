#include "holberton.h"

/**
* more_numbers - Prints form 0 to 14 10 times
*
* Return: void
*/

void more_numbers(void)
{
	int i = 0;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
