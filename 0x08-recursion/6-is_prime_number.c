#include "main.h"

/**
  *is_prime_number - function prototype
  *@n: parameter
  *Description: function that returns 1 if
  *input integer s a prine number
  *Return: integer
  */

int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	else
		if (n % i == 0)
			return (0);
		else
			return (is_prime_number(int n));
}
