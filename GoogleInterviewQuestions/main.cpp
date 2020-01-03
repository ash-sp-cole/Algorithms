#include <iostream>

using namespace std;


int main () {


int arr[] {1,2,3,4,5,7,9};

int target {13};

int low = 0;

size_t n = sizeof(arr)/ sizeof(arr[0]);

int high = (n-1);

while ( low < high) {

        if (arr[low] + arr[high] == target) {
                cout << " target met with array index additions :" << arr[low] << " and  " << arr[high];
            break;

        }
                else if ( arr[low] + arr[high] < target) {
                        
                        cout << " else if comparisons:" << arr[low] << " and  " << arr[high] << endl;
                        low++;
                }

                else if (arr[low] + arr[high] > target) {
                cout << " else comparisons " << arr[low] << " and  " << arr[high] << endl;
                high--;
                }
        }


    return 0;
}