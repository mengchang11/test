#include "part_sort.h"

#include <iostream>
#include <unistd.h>

void QueckSort(int *arr, int left, int right)
{
    if (left < right) {
        int p = PartSort(arr, left, right);
        QueckSort(arr, left, p - 1);
        QueckSort(arr, p + 1, right);
    }
}

int PartSort(int *arr, int left, int right)
{
    int p = left - 1;
    int num = arr[right];
    for (int i = left; i < right; ++i) {
        if (arr[i] <= num) {
            p++;
            Swap(arr, p, i);
        }
    }
    Swap(arr, p + 1, right);

    return p + 1;
}

void Swap(int *arr, int p, int q)
{
    int temp = arr[p];
    arr[p] = arr[q];
    arr[q] = temp;

    std::cout << arr[q] << " " << arr[p] << std::endl;

    return;
}