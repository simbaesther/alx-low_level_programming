#include<stdio.h>
#include <stdlib.h>

int main (void)
{
    size_t size = 1024;
    char *lineptr;
    lineptr = malloc (sizeof (char *)*size);
    
    printf("$ ");
    getline(&lineptr, &size, stdin);
    printf("%s", lineptr);
    
    return 0;
}
