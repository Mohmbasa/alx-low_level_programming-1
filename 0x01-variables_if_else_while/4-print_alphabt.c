#include <stdio.h>
/**
 * main- entry point
 * Return: always 0 (sucess)
 */
int main(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a == 'q' || a == 'e') != 1)
		{ 
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
