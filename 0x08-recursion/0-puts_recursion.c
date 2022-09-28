#include "main.h"

/**
  *_puts_recursion - function prototype
  *@s: string
  *Return: a character
  */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
