#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input 98,
 *               in order seperated bt a comma followed by a space
 *@n: The number to begin counting with
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
