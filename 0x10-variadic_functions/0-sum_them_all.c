#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - prototype function that returns
  *the sum of all its parameters
  *
  *@n: parameter
  *
  *Return: sum of parameters or 0
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, ui;
	va_list arglist;

	if (n == 0)
		return (0);

	va_start(arglist, n);

	for (ui = 0; ui < n; ui++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);

	return (0);
}
