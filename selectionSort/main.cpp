#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> arr, int n);
void swap(vector<int> arr, int i, int j);

int main()
{

    vector<int> arr{3, 5, 3, 2, 7, 8, 9, 1};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    cout << "\n \n ............... \n sorted \n ......... \n";

    selectionSort(arr, n);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }

    return 0;
}

void selectionSort(vector<int> arr, int n)
{

    for (int i = 0; i < n; i++)
    {

        int min = i;

        for (int j = i; j < n; j++)
        {

            if (arr[j] < arr[min])

                min = j;
        }

        swap(arr, min, i);
    }
}

void swap(vector<int> arr, int i, int j)
{

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
