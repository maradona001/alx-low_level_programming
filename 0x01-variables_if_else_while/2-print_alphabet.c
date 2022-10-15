#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programming is positive,zero, or negative
 * Return: 0
 */
int main(void)
{
int n;
int k;

srand(time(0));
n = read() - RAND_MAX / 2;
k = n % 10;

if (k > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, k);
}
else if (k == o)
{
	printf("Last digit of %d is %d and id 0\n", n, k);
}
else
{
	print("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
}
return (0);
}


