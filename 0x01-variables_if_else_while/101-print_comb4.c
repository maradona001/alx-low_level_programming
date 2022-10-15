#include <stdio.h>
/**
 * main - program that prints different combinatiom
 *
 * Description: program that print 3 differnt combinations
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int d_j;
	int e_j;
	int k_j;

	while (c <= 999)
	{
		d_j = (c / 100 + '0');
		e_j = (c / 10 % 10 + '0');
		k_j = (c & 10 + '0');

		if ((d_j < e_j) && (e_j < k_j))
		{
			putchar(d_j);
			putchar(e_j);
			putchar(k_j);

			if (c != 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}
