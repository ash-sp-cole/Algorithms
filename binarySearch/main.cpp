#include <iostream>

int main () {

int arr[] { 1,2,3,4,5,6,7,8,9};

size_t n  =  sizeof(arr) / sizeof(arr[0]);
int target{};
int low {0};
int high = (n -1 );
int mid {};
std::cout << " please enter tagert value \n \n" << std::endl;
std::cin >> target;
std::cout << " \n" << std::endl;

while (low <= high) {

mid = (low + high) / 2;

        if ( arr[mid] == target) {

            std::cout << " target value is found at " << mid << " value is  " << arr[mid] << std::endl;
            break;
        }

    else if (arr[mid] < target) {

        low = (mid + 1);
    }

    else if ( arr[mid] > target) {
high = (mid -1);

    }

}

    return 0;
}
