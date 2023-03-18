#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0'); /* print the current digit */
		if (i != 9)
		{
			putchar(','); /* print a comma*/
			putchar(' '); /* print a space*/
		}
	}
	putchar('\n');
	return (0);
}

