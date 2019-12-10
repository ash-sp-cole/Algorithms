#include <iostream>

using namespace std;





int quickSort( int arr[], int low, int high);

int partition( int arr[], int low, int high);

void swap (int *a, int *b);



int main () {


int arr[] { 1,32,12,45,33,22,66,77,88,11,7};

int size = sizeof(arr) / sizeof(arr[0]);
size_t  high = (sizeof(arr) / sizeof(arr[0])) -1;

cout << "                                         \n \n \n \n \n  ";
for (int i = 0; i < size; i++) {

cout << arr[i] << " , ";

}

quickSort( arr, 0, high);


cout << "                                         \n \n \n \n \n  ";

for (int i = 0; i < size; i++) {
cout << arr[i] << " , ";


}
    return 0;
}


//////////////////////////////////// QUICK SORT ================================


int quickSort (int arr[],int low, int high) {

if (low < high) {


int pivotPartitioned = partition(arr,low,high);


quickSort(arr, low, pivotPartitioned -1);
quickSort(arr,pivotPartitioned+1, high);

}

   return 0; 
}


//////////////////////////////////// PARTITION ================================

int partition (int arr[], int low, int high) {

    int pivot = arr[high];

    int i = (low -1);

for  ( int j = low; j <= high -1; j++){

        if (arr[j] < pivot) {

            i++;
            swap(&arr[i], &arr[j]);

        }
}
    swap(&arr[i+1], &arr[high]);

    return (i+1);
}

//////////////////////////////////// SWAP ================================

void swap (int *a, int *b) {

    int temp = *a;

    *a = *b;
   *b = temp;

}