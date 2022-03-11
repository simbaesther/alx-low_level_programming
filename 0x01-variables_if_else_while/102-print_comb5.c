#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * separated by a space
 * All numbers should be printed with two digits
 * combination of numbers must be separated by comma,
 * followed by a space
 * should be printed in ascending order
 * no repetion of numbers
 * Return: 0 on Success
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
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
