/**
 * Desc: file 1-alphabet.c
 * Prototype: void print_alphabet(void)
 */
#include "main.h"

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
