#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: NULL if str = NULL
 * On success, the _strdup function returns a pointer
 * to the duplicated string
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
