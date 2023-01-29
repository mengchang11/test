#include "print.h"

#include <iostream>

void PrintArr(int *arr, int arrLen, int arrNum)
{
    if (arr == nullptr) {
        return;
    }

    std::cout << "-------------------开始打印-----------------------" << std::endl;
    for (int index = 0; index < arrNum && index < arrLen; ++index) {
        std::cout << index << ": " << arr[index] << std::endl;
    }
    std::cout << "-------------------结束打印-----------------------" << std::endl << std::endl;

    return;
}