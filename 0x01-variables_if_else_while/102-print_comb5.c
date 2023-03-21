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

	for (d = 0; d < 99; d++)
	{
		for (e = d + 1; e <= 99; e++)
		{
			putchar(d / 10 + '0');
			putchar(d % 10 + '0');
			putchar(' ');
			putchar(e / 10 + '0');
			putchar(e % 10 + '0');
			if (d != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
