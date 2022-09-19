#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *void_puts - Prototype function
 *@str: String to be printed
 *
 *Return: Count of char as an integer
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(15);
}

