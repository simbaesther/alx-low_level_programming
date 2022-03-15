#include "main.h"
/**main -  prints the alphabet in lowercase, followed by a new line.
 * Using _putchar
 * Prototype: void print_alphabet(void);
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
