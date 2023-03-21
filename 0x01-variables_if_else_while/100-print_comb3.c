#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int e;

	for (d = 0; d < 9; d++)
	{
		for (e = d + 1; e <= 9; e++)
		{
			putchar(d % 10 + '0');
			putchar(e % 10 + '0');
			if (d != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
