#include "task3.h"

#include <iostream>


template<class T>
T change(T val)
{
    return val + 1;
}

int main()
{
    const size_t size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    map(arr, change);
    for (int elem:arr)
        std::cout << elem << ' ';
    return 0;
}

