#include "main.h"

/**
 * _strncat - concatenates two strings
 * use at most n bytes from src; and
 * src does not need to be null-terminated
 * if it contains n or more bytes
 *
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0; /* j represents the length of dest */

	while (dest[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
