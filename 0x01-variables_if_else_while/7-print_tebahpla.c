#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program is to print lowercase in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
