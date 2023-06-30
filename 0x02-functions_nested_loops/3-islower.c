#include "main.h"

/**
 * _is lower - Function to check if
 *		character is lowercase
 *
 * @c: Checks input of functions.
 *
 * Return: returns 1 if `c` is lowercase
 *		otherwise 0.
*/

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
