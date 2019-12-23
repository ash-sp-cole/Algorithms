#include <iostream>

int main()
{

    int arr[]{1, 2, 2, 3, 3,4, 5, 6, 4, 6, 4, 4, 4, 7};

    size_t n = sizeof(arr) / sizeof(arr[0]);

    std::cout << " size of array is " << n << std::endl;

    for (int i = 0; i < n; i++)
    {

        std::cout << arr[i] << "  ";
    }

    std::cout << " sorting array for possible duplicates" << std::endl;

    for (int i = 0; i < n; i++)
       for (int k = i+1; k < n;)
        {

            if (arr[i] == arr[k])
            {

               
                    for (int j = k; j < n-1; j++){
                        
                        arr[j] =arr[j+1];
                    }


                        n--;

                       
                    

            }
           else {
               k++;
           }
        }
 

    std::cout << "\n size of array is " << n << std::endl;

    for (int i = 0; i < n; i++)
    {

        std::cout << arr[i] << "  ";
    }

    return 0;
}
