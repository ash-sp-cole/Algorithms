#include <iostream>


using namespace std;


int main () {

int arr[] {1,2,3,4,5,6,7,9,10,11};

size_t n = sizeof(arr) / sizeof(arr[0]);

int sum = (n +1) * (n +2) / 2;

int result {};

for ( int i = 0; i < n; i++) {

    result+=arr[i];

}

sum = (sum - result);

cout << "\n" << n << " " << sum;

return 0;



}