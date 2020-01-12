#include <iostream>


using namespace std;



int main () {

int arr[] { 1,4,3,2,5,7,4,2,3,1};

size_t n = sizeof(arr) /sizeof(arr[0]);


int key{};
for (int i = 0; i <n; i++) {

key =arr[i];

int j = (i -1);

    while (j <= 0 && arr[j]> key) {

        arr[j+1] = arr[j];
        j = j-1;

    }
        arr[j +1 ] = key;










}


for (int k =0; k < n; k++){

cout << " " << arr[k];

}











    return 0;
}