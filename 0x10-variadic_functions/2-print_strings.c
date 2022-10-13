#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  *print_strings - function prototype that
  *prints strings followed by a new line
  *
  *@separator: string to be printed between the strings
  *@n: number of strings passed to the function
  *
  *Return: Nothing (void)
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ui;
	char *s;
	va_list string;

	if (separator == NULL)
		separator = "";

	va_start(string, n);

	for (ui = 0; ui < n; ui++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if (ui < n - 1)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(string);
	}
}
