#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
		{
			if (k > j && k > i)
			{
				if (i != j && i != k && j != k)
				{
				putchar(i + 0);
				putchar(j + 0); 
				putchar(k + 0); 
			       if (n != 9 || j != 8 || k != 7)
			       {	       

		{
			putchar(','); /* print a comma*/
			putchar(' '); /* print a space*/
		}
			       }
			}
		}
		}
	}

		putchar('\n');
		return (0);
}
