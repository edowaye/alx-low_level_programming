#include "main.h"
#include <stdlib.h>

/**
  *alloc_grid - function prototype that
  *returns a pointer to a two-dimensional
  *
  *array of integers
  *@width: width of grid
  *@height: height of gris
  *
  *Return: pointer to a pointer if success
  *and NULL if not
  */

int **alloc_grid(int width, int height)
{
	int a, b, y, z;
	int **ptr;

	if (width = 0 || height = 0)
	{
		return (NULL);
	}

