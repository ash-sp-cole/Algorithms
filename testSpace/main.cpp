#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;



int main()
{

int arr[]{1,2,3,4,5,6,7,8,9,10,11,12,13,15,16};


size_t n = sizeof(arr) / sizeof(arr[0]);


int total = (n +1) * (n +2) / 2;



for (int i =0; i < n; i++) {


  total -=arr[i];



}



cout << total;
    return 0;
}

