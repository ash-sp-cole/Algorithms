#include <iostream>
#include <string>
#include <vector>

int searchFunction(std::vector<std::string> arr, int low, int mid, int high, int targetValue);

int main()
{

    std::vector<std::string> arr{"ash", "james", "alina", "lukas", "bob", "rollo", "carrina"};

    int low = {0};
    int high = arr.size() - 1;

    int mid{};

    std::string targetValue{};

    std::cout << " enter name to search for" << std::endl;

    std::cin >> targetValue;

   
 int searchFunction (std::vector<std::string> arr, int low, int mid, int high, std::string targetValue);



    return 0;
}





int searchFunction (std::vector<std::string> arr, int low, int mid, int high, std::string targetValue)
{

    std::string nf{"not found in database"};
 std::cout << " test func";
    while (low <= high)
    {

        mid = (low + high) / 2;

        if (targetValue == arr[mid])
        {

            std::cout << " your search was found , at postion !: " << mid;

            return mid;
        }

        else if (targetValue < arr[mid])
        {
            high = mid -1;
        }

        else {

            low = mid +1;

        }

        return mid;
    }

    return mid;
}