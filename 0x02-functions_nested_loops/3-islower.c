#include "main.h"

/**
 * _is lower - function to check if
 *	character is lowercase
 *
 * Description: checks input of functions `c`.
 * @parameter: c is lowercase
 *
 * Return: returns 1 if `c` is lowercase otherwise 0.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
