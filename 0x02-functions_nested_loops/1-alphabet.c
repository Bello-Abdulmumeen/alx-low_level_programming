#include "main.h"

/**
 * print_alphabet - print all alphabet in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);
	_putchar('\n');
}

