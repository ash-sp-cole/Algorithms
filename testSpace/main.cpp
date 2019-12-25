#include <iostream>



int main () {







int arr [] {1,2,3,4,4,5,6,7,7,8};

size_t n = sizeof(arr) / sizeof(arr[0]);


for (int i = 0; i <n; i++){

    std::cout << "  " << arr[i];


}

std::cout << "\n searching for duplicates ...................................................." << std::endl;;



for (int i = 0; i < n; i++) 

            for (int j = i+1; j < n; ) {
                    
                    if (arr[i] == arr[j]) {
                                                    
                            for (int k = j;k < n-1;k++){
                                arr[k] = arr[k+1];
                                
                            }
                                

                   
                n--;
                    }
     else{ j++;}
            }



for (int i = 0; i <n; i++){

    std::cout << "  " << arr[i];


}
return 0;

}