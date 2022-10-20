#include "main h"

/**
 * print_line - printing lines
 * @b: number of times
 *
 * Return: void
 */

void print_line(int b)
{
	int i;

	for (i = 0; i < b; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
