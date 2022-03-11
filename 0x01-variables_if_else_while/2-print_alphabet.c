#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Return: 0 on Success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
