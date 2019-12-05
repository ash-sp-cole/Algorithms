#include <iostream>
#include <vector>

int main()
{

    std::vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 22, 33, 44, 55, 66, 77, 88, 99};

    int low{0};
    int high = arr.size() - 1;

    int mid{};

    int targetValue{};

    int turnsTaken{};

    std::cout << " enter target value ... ";

    std::cin >> targetValue;

    std::cout << std::endl;

    while (low <= high)
    {

        mid = (low + high) / 2;

        turnsTaken++;

        if (targetValue == arr[mid])
        {

            std::cout << " your value " << targetValue << " is found in our database " << std::endl;
            std::cout << " turns taken : " << turnsTaken << " value found : " << mid;

            return mid;
        }

        else if (targetValue < arr[mid])
        {

            high = mid - 1;
        }

        else
        {

            low = mid + 1;
        }
    }

    return 0;
}