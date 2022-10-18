#include "main.h"

/**
 * _isalpha - check if letter is alphabet
 * @c: The character to check
 *
 * Return: 1 if character is letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
