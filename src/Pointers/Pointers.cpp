#include <iostream>

using namespace std;

int main(){
    int value = 24;

    //one type of Assigning
    int *ptr = &value;
    cout<<"Value Stored-> "<<*ptr<<endl;

    //  ptr = 20;  error

    //Two type of Assigning
    *ptr = 30;
    cout<<"Value Stored-> "<<*ptr<<endl;

    cout<<endl;

    int anotherValue = 0;

    //Three type of Assigning
    int *ptr1 = &anotherValue; // Now ptr1 points to a valid memory location
    *ptr1 = 30;                // Safe to dereference and assign


    //Four type of Assigning

    int *ptr2 = new int; // Dynamically allocate memory
    *ptr2 = 30;          // Safe to dereference and assign
    delete ptr2;         // Always free allocated memory  
    // cout<< ptr2 << endl;  //results Dangling Pointer error



    //Five type of Assigning
    int *ptr3 = nullptr; 
    ptr3 = &value;     
    cout<<"*ptr3 -> "<<&ptr3<<endl; 

    // int *ptr3 = nullptr; 
    // *ptr3 = 30;     // throws error


    // int *ptr1;
    // *ptr1 = 30;
    // cout<<"Address of pointer1-> "<<ptr1<<endl;
    // cout<<"Value Stored-> "<<*ptr1<<endl;
    // cout<<"*pointers Address-> "<<&ptr1<<endl;

    /*Here, ptr1 is declared as a pointer to an integer, but it is not initialized to point to 
    a valid memory location. The line *ptr1 = 30; attempts to assign 30 to whatever address ptr1 
    contains by default, which can lead to undefined behavior or a segmentation fault.
    Why Undefined Behavior Occurs

    When you declare a pointer without initializing it, it contains a random, unpredictable address. 
    Attempting to dereference and write to this random address, as with *ptr1 = 30;, may lead to a 
    segmentation fault, memory corruption, or unexpected behavior.*/

    return 0;
}