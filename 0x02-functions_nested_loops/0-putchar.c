#include "main.h"
/**
 * main - entry
 *Description:  print - putchar
 * Return: 0
 */


int main(void)
{
	char str[] = "_ptchar";
	int ch;
	for (ch = 0; ch < 8;ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

