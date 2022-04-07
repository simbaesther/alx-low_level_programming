#ifndef MAIN_H
#define MAIN_H

/**
 * Desc - a header file containing the prototypes of all the functions in
 * this directory, and the prototype of the function _putchar
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
