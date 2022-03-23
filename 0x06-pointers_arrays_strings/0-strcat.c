#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
