#include "main.h"
#include <stdlib.h>

/**
  *_strdup - function prototype that returns a pointer
  *to a duplicate of a string & allocates memory for that
  *string which could be freed
  *
  *@str: pointer to the duplicated string
  *
  *Return: NULL if string is NULL or if insufficient
  *mem available; and a pointer if successful
  *
  */

char *_strdup(char *str)
{
	char *dup_str; /*declaration*/
	unsigned int len, ui;

	if (str == NULL) /*condition 1*/
	{
		return (NULL);
	}

	len = 0; /*declaration*/

	while (str[len] != '\0') /*if str has not come to its end*/
	{
		len++;
	}

	dup_str = malloc(sizeof(char) * (len + 1));
	/*strlen function does not count null byte ergo len + 1*/

	if (dup_str == NULL)
	{
		return (NULL); /*same as condition 1*/
	}

	for (ui = 0; ui < len; ui++)
	{
		dup_str[ui] = str[ui];
	}

	dup_str[len] = '\0';

	return (dup_str);
}
