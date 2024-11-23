#include <iostream>
using namespace std;

class Deep {
public:
    int* data;

    Deep(int value) {
        data = new int(value);
    }

    // Deep copy constructor
    Deep(const Deep& other) {
        data = new int(*other.data); // Creates a new copy of the data
    }

    void display() const {
        cout << "Data: " << *data << endl;
    }

    ~Deep() {
        delete data;
        cout << "Destructor called." << endl;
    }
};

int main() {
    Deep obj1(20);
    Deep obj2 = obj1; // Deep copy

    obj1.display();
    obj2.display();

    return 0;
}
