#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - function prototype that
  *prints numbers, followed by a new line
  *
  *@separator: pointer parameter
  *@n: parameter
  *
  *Return: Nothing (void)
  *
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ui;

	va_list xyz; /*create a var list variable*/

	va_start(xyz, n);

	for (ui = 0; ui < n; ui++)
	{
		printf("%d", va_arg(xyz, int));
		if (ui < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(xyz);
}
