#include <iostream>

// quick sort

int quickSort(int arr[], int low, int high);

int partition(int arr[], int low, int high);

void swap(int *a, int *b);
// binary

// print

void print(int arr[], int n);

int main()
{

    // setup ===================================================

    int arr[]{1, 4, 2, 5, 1, 6, 7, 2, 44, 11, 55, 33, 77, 55, 88, 99, 66, 133, 432, 564, 768, 14, 9};

    int low = {0};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = n - 1;

    std::cout << " \n \n \n \n";

    print(arr, n);

    std::cout << " \n \n \n \n";

    quickSort(arr, 0, high);


    print(arr, n);
    return 0;
}

// quick sort ==================

int quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }

    return 0;
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

    return (pIndex + 1);
}

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        std::cout << "   " << arr[i];
    }
}