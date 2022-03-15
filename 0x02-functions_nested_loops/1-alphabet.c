#include "main.h"
/**
 * Prototype: void print_alphabet(void);
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * using _putchar
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
