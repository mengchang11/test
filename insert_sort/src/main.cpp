#include "print.h"
#include "insert_sort.h"

int main()
{
    int testArr[] = { 2, 3, 7, 1, 4, 6, 4, 1, 75, 11, 52, 1, 9};

    PrintArr(testArr, sizeof(testArr), sizeof(testArr) / sizeof(int));
    InsertSort(testArr, sizeof(testArr), sizeof(testArr) / sizeof(int));
    PrintArr(testArr, sizeof(testArr), sizeof(testArr) / sizeof(int));

    return 0;
}