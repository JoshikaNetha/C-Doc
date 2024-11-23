#include <iostream>

using namespace std;

int main(){
    
    int a = 10;
    int *ptr = nullptr;
    ptr = &a;  
   // *ptr = a;  //ptr is a null pointer, and dereferencing a null pointer is undefined behavior.
    cout << *ptr << endl;

    
    *ptr = a + 5;
    cout << *ptr << endl;
    cout <<"a : "<<a << endl;

    //*ptr4 storet int value not any address , ptr4 stores address not any value

    
    // Copying  Type - 1
    int x = 100;
    int *ptr1 = &x;
    int *ptr2 = ptr1; 
    cout << *ptr2 << endl;   // copies ptr1 address to ptr2


    //*ptr4 storet int value not any address , ptr4 stores address not any value

    // Copying  Type2
    // *ptr4 = &x; // it won't work

    *ptr2 = *ptr;
    cout <<"*ptr2 "<< *ptr2 << endl;   // 100 copies ptr1 address

    ptr2 = ptr;
    cout <<"*ptr no deference operator "<< *ptr2 << endl;   // copies ptr address to ptr2

    // ptr2 = &ptr;  not working to achieve this you have to store one pointer's address in 
    // another pointer, but for that, you need to use a pointer-to-pointer (a double pointer).

    return 0;
}