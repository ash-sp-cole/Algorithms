#include <iostream>

int partition(int arr[], int low, int high);
int quickSort(int arr[], int low, int high);

void swap(int *a, int *b);

void print(int arr[], int n);

int binarySearch(int arr[], int n);

int main()
{

    int arr[]{1, 3, 55, 33, 66, 88, 2242, 7474, 131, 386, 42, 4, 2, 3, 4, 5, 6, 4, 3, 2};

    int low{};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = (n - 1);

    std::cout << " \n \n \n unsorted array: \n \n";

    print(arr,n);

    quickSort(arr,0,high);

    std::cout << " \n \n \n sorted array: \n \n";

    print(arr,n);

    return 0;
}


int quickSort(int arr[], int low, int high) {

if (low <  high ) {
std::cout << " \n if loop quick \n";
    int pi = partition(arr, low, high);

    quickSort(arr, low, pi-1);

    quickSort(arr, pi+1, high);
}
return 0;

}


int partition (int arr[], int low, int high) {
std::cout << " \n part \n";
    int pIndex = (low -1);

    int pivot = arr[high];


        for (int j = low; j < high; j++) {

            if (arr[j] < pivot) {

                pIndex++;

                swap(&arr[j],&arr[pIndex]);

            }
        }

        swap (&arr[pIndex+1], &arr[high]);

return (pIndex+1);

}


void swap (int *a, int *b) {
std::cout << " \n swap \n";
int temp = *a;

*a =*b;

*b = temp;

}


void print (int arr[], int n) {

    for (int i =0; i < n; i++) {


        std::cout << "  " << arr[i];


    }
}