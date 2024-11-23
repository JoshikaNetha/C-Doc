#include <iostream>
using namespace std;

class Shallow {
public:
    int* data;

    Shallow(int value) {
        data = new int(value);
    }

    // Default copy constructor (shallow copy)
    Shallow(const Shallow& other) {
        data = other.data;
    }

    void display() const {
        cout << "Data: " << *data << endl;
    }

    ~Shallow() {
        delete data;
        cout << "Destructor called." << endl;
    }
};

int main() {
    Shallow obj1(10);
    Shallow obj2 = obj1; // Shallow copy

    obj1.display();
    obj2.display();

    // This will cause a problem because both obj1 and obj2 point to the same memory location.
    // Destructor will delete the same memory twice (undefined behavior).
    return 0;
}
