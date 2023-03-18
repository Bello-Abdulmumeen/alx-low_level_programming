#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j+)
		{
		putchar(i + '0'); /* print the current digit */
		putchar(j + '0'); /* print the current digit */

		if (i != 9 || j != 9) /* if not the least combination*/
		{
			putchar(','); /* print a comma*/
			putchar(' '); /* print a space*/
		}
		}
	}
		putchar('\n');
		return (0);
}
