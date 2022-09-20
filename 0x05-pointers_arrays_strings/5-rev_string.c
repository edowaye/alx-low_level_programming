#include "main.h"
#include <string.h>

/**
  *rev_string - Prototype function that reverses
  *a string
  *
  *@s: string to be reversed
  *
  *Return: 0
  */
void rev_string(char *s)
{
	int len = strlen(s);

	int i = 0;
	int j = 0;
	char temp[100];/*a temporary array to store*/

	for (i = 0; i < len; i++)
	{
		for (j = 0; i < len; j++, i++)/*using j to count len*/
		{
			if (s[i] == ' ' || s[i] == '.')
				break;
			temp[j] = s[i];/*storing str into temp*/
		}
		while (j > 0)
			j--;
		s[i - j - 1] = temp[j];
	}
}
