#include <iostream>
#include <vector>


int target(int arr[], int size, int targetValue);

int binarySearch(int arr[], int size, int targetValue);

int main()
{

  std::vector <int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    int targetValue{};

    int mid{};

    int low{0};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int high = arr.size() -1;

    std::cout << " enter target value \n ";

    std::cin >> targetValue;

    std::cout << " \n \n ";

    while (low <= high)
    {


        mid = (low + high )/2;
        if (targetValue == arr[mid])
        {

            std::cout << " found your target of " << arr[mid] << " at index " << mid << std::endl;
            break;
        }

        else if (targetValue < arr[mid])
        {

            high = mid - 1;
        }

        else
        {

            mid = low + 1;
        }

        
            std::cout << " not found sorry  " << std::endl;
    
    }

    return 0;
}