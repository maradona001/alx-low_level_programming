#include "main.h"
/**
 * print_alphabet - print the alphabets in lower case followed by a new line
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	putchar('\n');
}
