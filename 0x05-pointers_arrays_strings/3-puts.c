#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_puts - Prototype function
 *@str: String to be printed
 *
 *Description: A function that rintd a string
 *followed by a new line to std out
 *
 *Return: Count of char as an integer
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}

