#include "main.h"

/**
 * _isdigit - write a function that check for a digit (0 through 9)
 * @b: character to check
 * Return: 0 or 1
 */
int _isdigit(int b)
{
	if (b >= '0' && b <= '9')
		return (1);
	else
		return (0);
}
