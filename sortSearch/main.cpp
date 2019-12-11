#include <iostream>

// preProcessor functions

void quickSort(int arr[], int low, int high);

int partition(int arr[], int low, int high);

void swap(int *a, int *b);

void print(int arr[], int n);

int main()
{

    // set up

    int arr[]{3, 5, 2, 7, 9, 1, 6, 11, 55, 22, 77, 777, 44, 88, 255, 0, 33, 65, 23, 86, 14};

    int low{};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = n - 1;

    int mid{};

    print(arr, n);

    // sort ( quick sort )

    quickSort(arr, 0, high);

    print(arr, n);
    // search ( binary )

    return 0;
}

// ===================================================================== FUNCTIONS =====================================

int partition(int arr[], int low, int high)
{
    
    int pIndex = (low-1);
    int pivot = arr[high];

    for (int j = low; j < high; j++) {

            if (arr[j] < pivot) {

                pIndex++;
                swap(&arr[pIndex], &arr[j]);

            }
    }

    swap(&arr[pIndex+1],&arr[high]);
  
  return (pIndex+1);
}

void quickSort(int arr[], int low, int high)
{


        if (low < high) {

    int pi = partition(arr,low,high);


            quickSort(arr, low , pi-1);
            quickSort(arr,pi +1, high);

        }

    
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
        std::cout << "  " << arr[i];
    }
    std::cout << "\n \n \n";
}