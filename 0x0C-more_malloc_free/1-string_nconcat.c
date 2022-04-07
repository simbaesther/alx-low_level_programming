#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: the first string to be concatenated
 * @s2: the string to be concatenated to @s1
 * @n: the maximum number of bytes of s2 to concatenate to s1
 *
 * Return: a pointer pointing to a newly allocated space in memory
 * return NULL if the function fails
 * if null is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
