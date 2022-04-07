#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to be allocated.
 *
 * Return: a pointer to the allocated memory
 * if malloc fails, cause normal termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
