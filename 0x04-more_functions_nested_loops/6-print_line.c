#include "main.h"

/**
 * print_line - print straight line
 *
 * @n: is the numbers of times _ the character
 *	should be printed
*/

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnchr = 1; lnchr <= n; lnchr++)
			_putchar('_');
		_putchar('\n');
	}
}