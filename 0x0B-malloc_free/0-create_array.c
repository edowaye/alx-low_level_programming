#include "main.h"
#include <stdlib.h>

/**
  *create_array - prototype function that creates
  *an array for charactersand initializes it with
  *a specific char
  *
  *@size: array size
  *@c: specific char to be used to iniitialize
  *
  *Return: Null if zize is 0/fails or ptr
  *to an array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int ui; /*declaration*/
	char *arr;

	if (size == 0) /*condition 1 in task*/
		return (NULL);

	arr = malloc(sizeof(char) * size); /*syntax*/

	if (arr == NULL) /*if it fails*/
		return (NULL);

	for (ui = 0; ui < size; ui++)
	{
		arr[ui] = c;
	}
	return (arr);
}
