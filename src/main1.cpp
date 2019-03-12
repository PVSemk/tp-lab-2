#include "task1.h"

#include <iostream>


int main()
{
    const size_t size = 10;
    int array1[size] = {12, 6, -3, 0, 14, 12, 2, 17, 1, 15};
    char* array2[size] = {"a", "abc", "aaaaa", "aaaa", "aaaaaaaaaa", "aaa", "aaaaaaa", "a", "", "aaaaaaaa"};
    msort(array1, size);
    msort(array2, size);
    for (auto i(0); i < size; i++)
        std::cout << array1[i] << ' ';
    std::cout << std::endl;
    for (auto i(0); i < size; i++)
        std::cout << array2[i] << ' ';
    return 0;
}

