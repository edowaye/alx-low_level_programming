/**
  *print_name - prototype function that prints
  *a name
  *
  *@name: pointer to output to be printed
  *@f: function pointer
  *
  *Return: Nothing (void)
  */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
