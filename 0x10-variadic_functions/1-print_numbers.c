#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - function prototype that
  *prints numbers, followed by a new line
  *
  *@separator: pointer parameter
  *@n: parameter
  *
  *Return: a character
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /*create a var list variable*/

	va_start(args, n);

	for (int ui = 0; ui < n; ui++)
	{
		int x = va_arg(args, int);

		_putchar("%c\n", ui);
	}
	va_end(args);
	return (0);
}
