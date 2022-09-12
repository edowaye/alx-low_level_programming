#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Program prints last digit of last number stored in n'
 * Return: Always 0 (success)
 */

int main(void)

{	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
	printf("n is positive\n");
}
	if (n == 0)
{
	printf("n is zero\n");
}
	if (n < 0)
{
	printf("n is negative\n");
}
	return (0);

}
