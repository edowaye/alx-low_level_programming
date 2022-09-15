#include "main.c"
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
	char[9] output = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}
