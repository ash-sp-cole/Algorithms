 #include <iostream>

using namespace std;

// partition

int partition(int arr[], int low, int high);

// swap

void swap(int *a, int *b);

// quick sort

void quickSort(int arr[], int low, int high);

// print results

int main()
{

    // set up-------------------------------------------

    int arr[]{1, 4, 2,9,7,5,972,44,33,77,22,1,23,876,9,0,3,23,65};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int low{0};

    int high = n - 1;

    cout << "\n unsorted list :   \n \n";

    for (int i = 0; i < n; i++)
    {

        cout << "  " << arr[i];
    }

    cout << " \n \n \n list now being sorted : \n " << endl;

    // quick sort---------------------------------------------

    quickSort(arr, 0, high);

    // print results------------------------------------------

    for (int i = 0; i < n; i++)
    {

        cout << "  " << arr[i];
    }

    return 0;
}

// partition

int partition ( int arr[], int low, int high) {
    int pivot = arr[high];
    int pIndex = (low -1);

    for (int j = low; j < high; j++){
            if (arr[j] < pivot) {

            pIndex++;
            swap(&arr[pIndex], &arr[j]);

            }

    }

    swap(&arr[pIndex+1], &arr[high]);
    return (pIndex + 1);

}

// quick sort

void quickSort(int arr[], int low, int high)
{

    if (low < high)
    {

        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// swap
void swap(int *a, int *b)
{

    int temp = *a;

    *a = *b;

    *b = temp;
}

// print results
