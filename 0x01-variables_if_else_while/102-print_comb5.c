#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible combinations
 * of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(32);
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x / 10 != 9 || x % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
