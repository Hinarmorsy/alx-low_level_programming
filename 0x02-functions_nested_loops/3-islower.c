#include "main.h"

/**
 * _is lower - function to check if
 *	character is lowercase
 *
 * @c: checks input of functions
 *
 * Return: returns 1 if the `c` is lowercase otherwise 0.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
