#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)	
	{
		putchar(i);/**No incremental or break statement was included so i prints out infinitely*/
	}

	printf("Infinite loop avoided! \\o/\n");

	return(0);
}
