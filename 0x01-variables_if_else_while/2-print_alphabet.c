#include <stdio.h>
/**
 * main - entry
 *
 * Description: a program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putcher(ch);
		ch++;
	}
	putcher('\n');
	return (0);
}
