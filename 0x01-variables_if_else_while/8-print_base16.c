
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program is to print all numbers in base 16
 *
 * Return: 0
 *
 */

int main(void)
{
	char a;
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}

