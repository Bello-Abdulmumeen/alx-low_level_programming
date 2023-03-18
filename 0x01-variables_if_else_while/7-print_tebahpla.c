#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char alpha[26] =  "zyxwvutsrqponmlkjihgfedcba"
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	putchar('\n');
	return (0);
}
