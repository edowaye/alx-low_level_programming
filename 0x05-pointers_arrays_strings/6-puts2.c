#include "main.h"
#include <string.h>
/**
  *_strlen - Prototype function
  *@s: string whose length is to be returned
  *
  *Return: Count of char as an int
  */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}


/**
  *puts2 - Function prototype
  *
  *@str: string to be printed
  *
  *Return: void
  */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i = i + 2)
		_putchar(str[i]);

	_putchar('\n');
}
