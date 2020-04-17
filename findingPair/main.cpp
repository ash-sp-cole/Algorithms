#include <iostream>

int main()
{
    int arr[]{1, 2, 3, 4, 5, 6};

    int target{9};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    int low{0};

    int high = n - 1;

    // while loop to start loop
    low = 0;
    while (low < high)
    {
        if (arr[low] + arr[high] == target)
        {
            std::cout << " target met in array " << arr[high] << "  and  " << arr[low] << std::endl;
           break;
        }

        else if (arr[low] + arr[high] < target)
        {

            low++;
        }

        else{


            high--;
        }
    }

    return 0;
}
