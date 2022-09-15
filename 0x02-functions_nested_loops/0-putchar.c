#include "main.h"
/**
 * main - Entry point
 *
 * Description: Program is to print putchar
 * on a new line
 *
 * Return: 0
 */

int main(void)
{
	char output[9] = "_putchar";
	int x;

	for (x = 0; x <= 7; x++)
	{
		_putchar(output[x]);
	}
	_putchar('\n');
	return (0);
}
