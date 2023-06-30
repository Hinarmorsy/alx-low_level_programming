#include"main.h"
/**
 * _is lower - check the character to be lower.
 *
 * description: check input of functions
 *
 * Return: returns 1 if the character is lowercase.
 * 		otherwise return (0)
*/
int _islower(int c);
{
	if(c >= 97 && c <= 122)
		return (1);
	return (0);
}
