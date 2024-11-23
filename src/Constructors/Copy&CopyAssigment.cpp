#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char *data;

public:
    // Constructor
    MyString(const char *str) {
        data = new char[strlen(str)];
        strcpy(data, str);
    }

    // Copy Constructor
    MyString(const MyString &source) {
        // data = new char[strlen(source.data) + 1];
        // strcpy(data, source.data);
        cout << "Copy Constructor called."<<data<< endl;
    }

    // Copy Assignment Operator
    MyString& operator=(const MyString &source) {
        if (this == &source) return *this; // Self-assignment check
        // delete[] data; // Release existing memory
        // data = new char[strlen(source.data) + 1];
        // strcpy(data, source.data);
        cout << "Copy Assignment Operator called."<<data  << endl;
        return *this;
    }

    // Destructor
    ~MyString() { delete[] data; }

    void display() const { cout << data << endl; }
};

int main() {
    MyString str1("Hello");
    MyString str2 = str1; // Calls Copy Constructor
    MyString str3("world");
    str3 = str1; // Calls Copy Assignment Operator

    // MyString str3("world");
    // str3 = str3; // Calls Copy Assignment Operator self assignment

    str1.display();
    str2.display();
    str3.display();

    return 0;
}
