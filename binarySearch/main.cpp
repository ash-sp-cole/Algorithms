#include <iostream>




void binarySearch (int arr[], int low, int high, int searchTarget);


///////////////////////////////////////////////////////---- pre processor 


int main () {

int arr[] {1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66,77,88,99};

size_t n = sizeof(arr) / sizeof(arr[0]);

int high = (n -1);

int low {};

int searchTarget{};

std::cout << " please enter the value you wish to search for " << std::endl;

std::cin >> searchTarget;

std::cout << "\n \n \n ........................................Searching ..................." << std::endl;

binarySearch(arr,0,high,searchTarget);

return 0;


}


void binarySearch (int arr[], int low, int high, int searchTarget) {




while ( low <= high) {

   int  mid = (low + high) / 2 ;

   if (arr[mid] == searchTarget) {

       std::cout << "number found at index " << mid << " vaule is  " << arr[mid];
       break;

   }

    else if (arr[mid] < searchTarget) {
        low = mid +1;

    }
    
    else {
        high = mid -1;
    }

}

    
}


