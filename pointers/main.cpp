#include <iostream>

using namespace std;

int main()
{

    int num{14};


    cout << " ======================= STANDARD INTEGER ====================== \n \n \n";

    cout << " the value held at num is: " << num << endl;

    cout << " the size of the value held in bytes is : " << sizeof(num) << endl;

    cout << " the address if the integer num is : " << &num << endl;
cout << "\n \n \n";
    /////////////// now for pointers //////////

    int *pointer;

    cout << " ======================= POINTER ====================== \n \n \n";
    cout << " value of pointer is (should be address) : " << pointer << endl;

    cout << " the size of the address held at point in bytes  : " << sizeof(pointer) << endl;

    cout << " the address (that the pointer) is held at " << &pointer << endl;

    pointer= nullptr;

    cout << " Pointer now set to null value , pointer value is now :  " << pointer << endl;

    pointer = &num;

    cout << " Pointer now is set to &num , the address of num :  value of pointer is ... : " << pointer << endl;

    return 0;
}