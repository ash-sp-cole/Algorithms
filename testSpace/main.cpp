#include <iostream>

using namespace std;

void print(int arr[], int n);

void quickSort(int arr[], int low, int high);

int partition(int arr[], int low, int high);

void swap(int *a, int *b);

// ============================================================================

int main()
{

    int arr[]{1, 4, 2, 5, 1, 6, 3, 55, 33, 11, 22,1321, 55, 88, 99, 00, 4, 76, 5, 3, 2, 37};

   size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = (n - 1);

    int low{0};

    print(arr, n);

    quickSort(arr, 0, high);

    print(arr, n);

    return 0;
}

// ============================================================================

void print(int arr[], int n)
{

    cout << "\n \n \n";

    for (int i = 0; i < n; i++)
    {

        cout << " " << arr[i];
    }
}

void quickSort (int arr[], int low, int high)
{


    if (low < high) {

            int pi = partition(arr,low,high);


            quickSort(arr,low, pi -1);

            quickSort(arr,pi+1,high);



    }







}
int partition(int arr[], int low, int high)
{

    cout << "\n part \n";

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