#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int d = 0; d < 9; d++)
	{
		for (int e = d + 1; e <= 9; e++)
		{
			putchar(d % 10 + '0');
			putchar(e % 10 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
