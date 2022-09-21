#include "main.h"
#include <string.h>

/**
  *puts_half - Prototype function
  *
  *@str: string to print
  *
  *Return: 0
  */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		_putchar(*(str + i));
	_putchar(10);
}


/**
  *_str-len: Prototype function
  *
  *@s:string
  *
  *Return: the length of string
  */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
			len++;
	return (len);
}
