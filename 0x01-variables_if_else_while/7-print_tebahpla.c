#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: o on Success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
