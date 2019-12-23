#include <iostream>

void print(int arr[], size_t n);

void quickSort(int arr[], int low, int high);

int partition(int arr[], int low, int high);

void swap(int *a, int *b);

int main()
{

    int arr[]{1, 4, 3, 2, 5, 1, 44, 22, 33, 66, 77, 55, 88, 33, 22, 42, 54, 3, 54, 876, 56, 234, 411, 789, 546, 870, 11, 23, 21};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int low{0};

    int high = (n - 1);

    std::cout << " \n \n \nhere is your unsorted list :  \n \n";

    print(arr, n);

    std::cout << " \n \n \n now sorting ..................." << std::endl;

    quickSort(arr, 0, high);

    print(arr, n);

    return 0;
}

void print(int arr[], size_t n)
{

    for (int i = 0; i < n; i++)
    {

        printf("%d  ", arr[i]);
    }
}

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int pi = partition(arr,low,high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int partition(int arr[], int low, int high)
{

    int pIndex = (low - 1);

    int pivot = arr[high];

    for (int j = low; j < high; j++)
    {

        if (arr[j] < pivot)
        {
            pIndex++;
            swap(&arr[pIndex], &arr[j]);
        }
    }

    swap(&arr[pIndex + 1], &arr[high]);

    return pIndex + 1;
}

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}