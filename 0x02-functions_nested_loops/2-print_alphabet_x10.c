#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
		char c = 'a';
		int i = 0;

		for (i =0 ; i < 10; i++)
		{
			while (c <= 'z')
			{
				_putchar(c);
				c++;
			}
			_putchar('\n');
			
		}
}
