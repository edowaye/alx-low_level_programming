#include "main.h"

/**
 *_strlen - Prototype function
 *@s: String whose length should be returned
 *
 *Return: Count of char as an integer
  */

int _strlen(char *s)
{
	int count;

	for (count = 0; str[count] != '\0'; ++count);

	return count;
}
