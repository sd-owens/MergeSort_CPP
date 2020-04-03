#include <iostream>
// function prototypes
void mergeSort(int[], int leftIndex, int rightIndex);
void merge(int[], int leftIndex, int mid, int rightIndex);
void printArray(int[], int size);

void mergeSort(int arr[], int leftIndex, int rightIndex)
{
    if(leftIndex < rightIndex)
    {
        int mid = (leftIndex + rightIndex) / 2;

        mergeSort(arr, leftIndex, mid);
        mergeSort(arr, mid + 1, rightIndex);

        merge(arr, leftIndex, mid, rightIndex);
    }
}
void merge(int arr[], int leftIndex, int mid, int rightIndex)
{
    int i, j, k;
    // calculate the length of the temp arrays
    int n1 = (mid - leftIndex) + 1;
    int n2 = rightIndex - mid;
    // create temp arrays
    int leftArray[n1];
    int rightArray[n2];

    // populate temp arrays
    for (int q = 0; q < n1; q++)
        leftArray[q] = arr[leftIndex + q];

    for (int p = 0; p < n2; p++)
        rightArray[p] = arr[mid + 1 + p];

    i = 0;
    j = 0;
    k = leftIndex;

    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}
// help function to watch array throughout function calls.
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


