#include <iostream>

using namespace std;

int main(){

    int value = 42;
    void *vptr = &value;     // Assign an int* to void*

    // Cast to int* before dereferencing
    int *iptr = static_cast<int*>(vptr); 
    std::cout << *iptr << std::endl;  // Output: 42


    void *vptr1;
    vptr = &value;
    std::cout << *static_cast<int*>(vptr) << std::endl;


    return 0;
}