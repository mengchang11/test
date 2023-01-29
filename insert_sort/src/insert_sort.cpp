#include "insert_sort.h"

void InsertSort(int *arr, int arrLen, int arrNum)
{
    if (arr == nullptr || arrNum <= 1) {
        return;
    }
    for (int i = 0; i < arrNum - 1 && i < arrLen; ++i) {
        for (int j = i; j >= 0 && j < arrLen - 1; --j) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
            } else {
                break;
            }

        }
    }

    return;
}