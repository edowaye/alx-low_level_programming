#include "main.h"

/**
  *is_prime_number - function prototype
  *@n: parameter
  *Description: function that returns 1 if
  *input integer is a prime number
  *Return: integer
  */

int is_prime_number(int n)
{
	if (n % n == 0 || n / 1 == n)
		return (1);
	else
		return (0);
}
