#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
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
