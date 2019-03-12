#ifndef TASK1_TASK3_H
#define TASK1_TASK3_H

#include <cstddef>

template <typename T, size_t size>
void map(T (&array)[size], T (*change)(T)) // First argument is the link to arr which contains size elements
{
    for (size_t i(0); i < size; i++)
        array[i] = change(array[i]);
}
#endif //TASK1_TASK3_H
