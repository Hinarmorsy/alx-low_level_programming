#include <unistd.h>
#include "main.h"

/**
 * main _putchar - write the character c to stdout
 *
 * Description: the character to print
 *
 * Return: on success 1.
 * on error -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
