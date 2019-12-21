#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;



int main()
{

int arr[]{1,2,3,4,5,6,7,8,10,11,12,13,14,15};


size_t n = sizeof(arr) / sizeof(arr[0]);

int total = (n+1) * (n+2) / 2;

for  (int i = 0; i < n; i++) {

    total -= arr[i];

// calc for finding sum of array


}

cout << total;




    return 0;
}

