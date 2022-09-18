#include <stdio.h>

/**
  *main - entry point
  *
  *Description: A that prints the first 50 Fibonacci numbers,
  *starting with 1 and 2, followed by a new line.
  *
  *Return: 0;
  */

int main(void)
{
	int n;

	long int fn[50];

	fn[0] = 1;
	fn[1] = 2;

	printf("%ld, %ld ", fn[0], fn[1]);

	for (n = 2; n < 50; n++)
	{
		fn[n] = fn[n - 1] + fn[n - 2];

		if (n == 49)
			printf("%ld\n", fn[n]);
		else
			printf("%ld", fn[n]);
	}
	return (0);
}
