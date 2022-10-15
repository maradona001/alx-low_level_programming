#include <stdio.h>
/**
 * main - print nymbers in base sixteen
 *
 * Description: printing numbers in base sixteen
 * this program prints "printing in base sixteen
 * Return: 0
 *
 */
int main(void)
{
char m;
for (m = '0'; m <= '9'; m++)
{
	putchar(m);
}
for (m + 'a'; m <= 'f'; m++)
{
	putchar(m);
}
putchar('\n');
return (0);
}
