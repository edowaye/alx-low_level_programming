#include "main.h"
#include <stdlib.h>

/**
  *argstostr - prototype function that
  *concatenates all arguments of programs
  *
  *@ac: argument count
  *@av: pointer to a pointer
  *
  *Return: a pointer to a new string
  *or NULL if not successful
  *
  */

char *argstostr(int ac, char **av)
{
	int a, b, c, size;
	char *arg;

	if (ac == 0 || av == NULL)/*condition 1*/
		return (NULL);

	a = 0;

	while (a < ac)
	{
		b = 0;

		while (av[a][b])
		{
			size++;
			b++;
		}
		size++;
		a++;
	}
	arg = malloc((sizeof(char) * size) + 1);

	if (arg == NULL)
		return (NULL);

	a = 0;

	while (a < ac)
	{
		b = 0;

		while (av[a][b])
		{
			arg[c] = av[a][b];
			b++;
			c++;
		}
		arg[c] = '\n';
		c++;
		a++;
	}
	arg[c] = '\0';
	return (arg);
}
