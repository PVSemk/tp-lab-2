#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

#include <cstring>

template <typename T>
bool compare(T a, T b)
{
    return a < b;
}

template<>
bool compare(char* a, char* b)
{
    return strlen(a) < strlen(b);
}

template <typename T>
void msort(T* array, size_t size)
{
    if (size < 2) // Stop the recursion
        return;

    msort(&array[0], size / 2); // Sort the right half
    msort(&array[size/2], size - (size / 2)); // Sort the left half

    T* resArr = new T[size]; // Result array for sorting

    size_t lhalf(0), rhalf(size / 2);
    int idx(0);

    while ((lhalf < size / 2) || (rhalf < size))
    {
        if ((lhalf < size / 2) && (rhalf < size))
        {
            if
        }
    }
}
#endif //TASK1_TASK1_H
