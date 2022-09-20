#include "main.h"
#include <string.h>
/**
  *_strelen - Prototype function
  *@s: string whose length is to be returned
  *
  *Return: Count of char as an int
  */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}


/**
  *puts2 - Function prototype
  *
  *@s: string to be printed
  *
  *Return: 0
  */

void puts2(char *s)
{
	int i = 0;

	while (s[i] != '\n' && s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
