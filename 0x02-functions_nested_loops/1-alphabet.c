#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the lowercase alphabets
 *
 * Description: 'Program is to print the alphabets in lowercase'
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar ('\n');
}
