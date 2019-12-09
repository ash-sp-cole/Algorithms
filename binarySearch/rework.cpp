#include<iostream>

#include <vector>


// binary search  - look in vector for number



int searchBinary (std::vector <int> arr , int target, int mid);

int main () {


std::cout << "test binary" << std::endl;

std::vector <int> arr { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};

int target{};

int mid{};

std::cout << " enter target value " << std::endl;

std::cin >> target;

  std::cout << " before funt ";

searchBinary(arr,target,mid);


  std::cout << " after funct \n";


    return 0;
}

int searchBinary (std::vector <int> arr, int target, int mid) {

int low = 0;
int high = arr.size() -1;

int times{};


while (low <= high) {

    times++;

    mid = low + high / 2;

    if (target == arr[mid]) {

        std::cout << " found number " << target << std::endl;
        
        std::cout << " times searched through  " << times << std::endl;

        
        std::cout << " found at index value " << mid << std::endl;
        return 0;
    }


    else if ( target < arr[mid]) {

            high = mid -1;

    }

    else {

        low = mid + 1;

    }
}
return-1;
}