#include "main.h"
int lenstr(char *i);
/**
  *print_rev - Funtion prototype
  *
  *@s: The string to print
  *
  *Description - To print a string in reverse
  *followed by a new line
  *
  *Return: void
  */

void print_rev(char *s)
{
	int j;

	j = lenstr(s) - 1;
	/**-1 is the null byte*/

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}


/**
  *lenstr - Function to count the length of a string
  *
  *@i: The parameter to be counted
  *
  *Return: 0
  */

int lenstr(char *i)
{
	int count = 0;
	int x;

	for (x = 0; i[x] != '\0'; x++)
	{
		count = count + 1;
	}
	return (count);
}
