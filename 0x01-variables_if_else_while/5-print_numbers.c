#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Program printing all numbers of base 10
 * Return: (0)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
