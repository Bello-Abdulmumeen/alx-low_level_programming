#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
		putchar(i + '0'); /* print the current digit */
		putchar(j + '0'); /* print the current digit */

		{
			putchar(','); /* print a comma*/
			putchar(' '); /* print a space*/
		}
		}
	}
		putchar('\n');
		return (0);
}
