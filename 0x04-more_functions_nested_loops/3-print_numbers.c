#include "main.h"
/**
 * print_numbers - print 0 - 9
 *
 * Description: Write a function that multiplies two integers.
 *
 * return: 0
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
