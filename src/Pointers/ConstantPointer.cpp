#include <iostream>

using namespace std;
int main(){

    /* A pointer to a const int. The integer value cannot be modified through this pointer, 
    but the pointer itself can point to a different address.*/
    const int *p;
    
    /*This is equivalent to const int *p; and has the same behavior: a pointer to a const int.*/
    int const *p1;

    int value = 20;
    /* A const pointer to an int. The pointer itself cannot be changed to point to another 
    address, but the value it points to can be modified.*/
    int *const p2 = &value ;

  
    p = &value;            // p now points to value
    p1 = &value;           // p1 now points to value

    cout << "P: " << p << endl;   // Print address of value
    cout << "P1: " << p1 << endl; // Print address of value
    cout << "P2: " << p2 << endl; // Print address of value
    
    cout << "P: val " << *p << endl;   // Print address of value
    cout << "P1: val " << *p1 << endl; // Print address of value
    cout << "P2:  val " << *p2 << endl; // Print address of value

    int v = 60;
    // Demonstrate const behavior
    // *p = 30; // Error: cannot modify the value through a const pointer
    *p2 = v; // Allowed: modifying the value through a non-const pointer

    p =  p2;            // p now points to value
    p1 = p2;           // p1 now points to value

    cout << "Value after modification via p2: " << value << endl;

    cout << "P: " << p << endl;   // Print address of value
    cout << "P1: " << p1 << endl; // Print address of value
    cout << "P2: " << p2 << endl; // Print address of value
    
    cout << "P: val " << *p << endl;   // Print address of value
    cout << "P1: val " << *p1 << endl; // Print address of value
    cout << "P2:  val " << *p2 << endl; // Print address of value

    return 0;

    return 0;
}