#include "main.h"

/**
 * _isupper - evaluate if a letter is in uppercase
 *@c: print int
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
