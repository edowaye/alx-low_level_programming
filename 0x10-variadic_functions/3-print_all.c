#include <atdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - function prototype to print anything
  *
  *@format: list of arg types to be passed
  *
  *Return: Nothing (void)
  */

void print_all(const char * const format, ...)
{
	unsigned int ui;
	char *s;
	*separator;

	va_list args;

	va_start(args, format);

	ui = 0
