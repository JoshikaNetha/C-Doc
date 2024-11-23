#include <iostream>
using namespace std;
/*

A virtual destructor is essential in C++ when you want to delete a derived class object 
through a pointer to the base class. If the base class destructor is not virtual, only the 
base class destructor will be called, and the derived class’s resources will not be cleaned up,
potentially causing resource leaks.


*/
class Base {
public:
    Base() {
        cout << "Base constructor\n";
    }

    virtual ~Base() {  // Virtual destructor
        cout << "Base destructor\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor\n";
    }

    ~Derived() {
        cout << "Derived destructor\n";
    }
};

int main() {
    Base* ptr = new Derived();  // Pointer to base class, but pointing to derived object
    delete ptr;                 // Deletes the derived object

    return 0;
}
