#include <stdio.h>
/**
 * main - printing singles numbers
 *
 * Description: printing single digits with another command
 *
 * Return: 0
 */
int main(void)
{
	int g;

	for (g = 0; g < 10; g++)
		putchar((g % 10) + '0');
	putchar('\n');
	return (0);
}
