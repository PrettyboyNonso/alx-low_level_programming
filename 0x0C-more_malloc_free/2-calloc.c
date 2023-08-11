#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (size == 0 || nmemb == 0)
    {
        return NULL;
    }
    void *memory = malloc(size * nmemb);
    if (memory == NULL)
    {
        return NULL;
    }
    for (int i = 0; i < nmemb; i++)
    {
        ((char *)memory)[i] = 0;
    }

    return memory;
}

