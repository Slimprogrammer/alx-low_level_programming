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
	int f;

	for (d = 0; d < 9; d++)
	{
		for (e = d + 1; e <= 9; e++)
		{
			for (f = e + 1; f <= 9; f++)
			{
				putchar(d % 10 + '0');
				putchar(e % 10 + '0');
				putchar(f % 10 + '0');
				if (d != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
