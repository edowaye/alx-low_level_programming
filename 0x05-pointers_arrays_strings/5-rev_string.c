#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *rev_string: Function prototype
  *
  *@s: String to be reversed
  *
  *Description: A function that reverses a string
  *
  *Return 0
  */

void rev_string(char *s)
{
	int i = str.length() - 1;
	int start, end = i + 1; 
	string result = "";

	while (i >= 0) 
	{
		if (str[i] == ' ') 
		{
			start = i + 1;
			while (start != end)
				result += str[start++];
			result += ' ';
			end = i;
		}

		i--;
	}
	start = 0;
	while (start != end)
		result += str[start++];
	return (0);
}
