#include "main.h"

/**
 * main - print all alphabet in lower case
 *
 * Return: Always 0
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
