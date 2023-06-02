#include "function_pointers.h"
#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
    if (size == 0)
    {
        return;
    }

    for (size_t i = 0; i < size; i++)
    {
        action(array[i]);
    }
}
