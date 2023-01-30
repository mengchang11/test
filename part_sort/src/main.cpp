#include "print.h"
#include "part_sort.h"

int main()
{
    int testArr[] = { 2, 3, 7, 1, 4, 6, 4, 1, 75, 11, 52, 1, 9};
    // int testArr[] = { 2, 1, 3};

    PrintArr(testArr, sizeof(testArr), sizeof(testArr) / sizeof(int));
    QueckSort(testArr, 0, sizeof(testArr) / sizeof(int) - 1);
    PrintArr(testArr, sizeof(testArr), sizeof(testArr) / sizeof(int));

    return 0;
}