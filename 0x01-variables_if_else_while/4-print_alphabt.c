#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * except q and e
 * Return: 0 on Success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
