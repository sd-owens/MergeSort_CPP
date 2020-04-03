#include <iostream>
#include <array>

// function prototypes
void mergeSort(int arr[], int leftIndex, int rightIndex);
void printArray(int arr[], int size);

int main()
{
    int array[] {10, 1, 9, 3, 8, 2, 5, 7, 6, 4};

    int array_size = sizeof(array) / sizeof(array[0]);

    std::cout << "\nUnsorted: ";

    printArray(array, array_size);

    mergeSort(array, 0, array_size - 1);

    std::cout << "\nSorted: ";

    printArray(array, array_size);

    return 0;
}