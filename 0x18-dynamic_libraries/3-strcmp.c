#include "main.h"
#include <string.h>

/**
  * _strcmp - Function prototype
  * @s1: parameter
  * @s2: parameter
  * Return: a character
  */

int _strcmp(char *s1, char *s2)
{
	int a, res;

	for (a = 0; s1[a] != '\0'; a++)
	{
		res = s1[a] - s2[a];
		if (res == 0)
			continue;
		else if (s1[a] == '\0' && s2[a] == ' ')
		{
			res = s1[a] - ' ';
			break;
		}
		else
			break;
	}

	return (res);
}
