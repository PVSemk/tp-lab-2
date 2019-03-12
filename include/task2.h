#ifndef TASK1_TASK2_H
#define TASK1_TASK2_H

#include <cstddef>

template <typename T, size_t size>
T* createArr(T (*gen)())
{
    T* arr = new T[size];
    for (size_t i(0); i < size; i++)
        arr[i] = gen();
    return arr;
}

#endif //TASK1_TASK2_H
