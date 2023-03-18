#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char number[10] = "0123456";
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(number[n]);
	}
	putchar('\n');
	return (0);
}
