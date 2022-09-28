#include "main.h"

/**
  *_print_rev_recursion - function prototype
  *@s: string to be reversed
  *Description: Program is to reverse a string
  *Return: a character
  */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
