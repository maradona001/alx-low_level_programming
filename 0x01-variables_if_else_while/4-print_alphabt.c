#include <stdio.h>
/**
 * main - print all letters except q and e
 *
 * Description: alphabets except q ans e
 * this program print "Print all alphabets except q and e
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
