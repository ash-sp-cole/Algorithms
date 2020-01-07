#include <iostream>



int main () {

int arr[] {1,2,3,4,5,6};

int target {9};

size_t n = sizeof(arr) / sizeof(arr[0]);

int low{};

int high{};

// while loop to start loop

while (low < high) {

        if (arr[low] + arr[high] == target) std::cout << " target met in array ." << arr[high] << "  and  " << arr[low] << std::endl;    
    

            else if (arr[low] + arr[high] < target) {
                low++;
            }

            else high++;


}



// if sum is to small , low + 1

// i sum to big high -1



// if nothing cout npot there








std::cout << " test find pair ";

    return 0 ;
}