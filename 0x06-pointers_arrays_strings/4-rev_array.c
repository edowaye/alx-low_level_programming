#include "main.h"
#include <string.h>

/**
 *reverse_array - Function to reverse
 *an array
 *@a:array
 *@n:integer from array
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n / 2; x++)
	{
		y = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = y;
	}
}
