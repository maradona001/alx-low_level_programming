#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is either positive, zero or negative
*
* Description: using the printf function
* this program prints "Programming is psitive, zero or negative
* Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /*code goes below here*/
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n < o)
{
	printf("%i is negative\n, n);
}
return (0);
}
