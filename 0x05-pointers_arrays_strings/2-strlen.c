#include "main.h"
#include <string.h>
/**
 *_strlen - Prototype function
 *@s: String whose length should be returned
 *
 *Return: Count of char as an integer
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
