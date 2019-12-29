#include <iostream>

void swap(int *a, int *b);

void print (int arr[], int n);

void quickSort(int arr[],int low, int high);

int partition (int arr[], int low, int high);




int main () {

std::cout << "  \n \n \n QuickSOrt algorithm \n \n \n";

int arr[] {1,4,3,2,5,4,33,2,4343,11,22,33,55,33,88,55,77,66,44,99,78,665,342,2,765,777,43,77};

size_t n = sizeof(arr) / sizeof (arr[0]);

int low = 0;

int high= (n-1);

print (arr,n);


std::cout << " \n \n now sorting your array ............................................................................ \n \n" << std::endl;

quickSort(arr,0,high);

print (arr,n);

    return 0;
}



void swap(int *a, int *b) {


int temp = *a;
*a = *b;
*b = temp;
}



void print (int arr[], int n) {

for (int i = 0; i < n; i ++) {

    std::cout << " " << arr[i];

}
}


void quickSort(int arr[], int low, int high) {


  if ( low < high) {

        int pi = partition(arr,low,high);

      quickSort(arr, low, pi-1);
        quickSort(arr,pi +1, high);
      


    }
}


int partition (int arr[], int low, int high) {

        int pIndex = (low -1);
        int pivot = arr[high];

        for (int i = low; i < high; i ++) {

                if (arr[i] < arr[high]) {
                    pIndex++;
                    swap(&arr[pIndex],&arr[i]);
                }
         
         
            
        }
 swap(&arr[pIndex+1], &arr[high]);
return (pIndex+1);
}