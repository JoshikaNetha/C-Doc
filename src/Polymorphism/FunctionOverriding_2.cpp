#include <iostream>
using namespace std;

class A {
public:
    virtual void display() const {  // Making this function virtual to support polymorphism
        cout << "[Class A] Display function called\n";
    }
    void show() const {  // Non-virtual function, not subject to polymorphism
        cout << "[Class A] Show function called\n";
    }
    void demo() const {  // Non-virtual function, not subject to polymorphism
        cout << "[Class A] DEMO function called\n";
    }
    virtual void display1() const {  // Making this function virtual to support polymorphism
        cout << "[Class A] Display 1 function called\n";
    }
};

class B : public A {
public:
    void display() const override {  // Overrides the base class display function
        cout << "[Class B] Display function called\n";
    }
    void show() const {  // Overrides the base class show function, but not virtual
        cout << "[Class B] Show function called\n";
    }
};

class C : public A {
public:
    void display() const override {  // Overrides display function
        cout << "[Class C] Display function called\n";
    }
    void show() const {  // Overrides show function, but not virtual
        cout << "[Class C] Show function called\n";
    }
};

int main() {
    // Scenario 1: Directly calling functions from instances of classes A and B
    A a;
    B b;
    a.display();  // Calls A's display
    b.display();  // Calls B's display since B overrides A's display

    // Scenario 2: If child class (C) doesn’t override display, it would call parent class A’s function
    C c;
    c.display();  // Calls C's display because it overrides A's display

    // Scenario 3: Using an object of derived class B but assigning it to a base class A variable
    A a1 = b;  // Object slicing occurs; only A part is retained
    a1.display();  // Calls A's display due to object slicing

    // Scenario 4: Using a pointer of base class A to point to an object of derived class B
    A *a2 = new B();  // A pointer to a derived B object
    a2->display();    // Calls B's display due to polymorphism

    // Scenario 5: Using a pointer of base class A to point to an object of derived class C
    A *a3 = new C();  // A pointer to a derived C object
    a3->display();    // Calls C's display due to polymorphism

    // Additional Scenarios
    // Scenario 6: Calling non-virtual function show() using base and derived objects and pointers
    a.show();         // Calls A's show (non-virtual function)
    b.show();         // Calls B's show (overrides but non-virtual, so no polymorphism)
    a2->show();       // Calls A's show because show() is not virtual
    a3->show();       // Calls A's show, not C's

    // Scenario 7: Copy assignment of a derived object to a base class variable
    a1 = c;           // Assigning C to A; object slicing occurs
    a1.display();     // Calls A's display, since object slicing keeps only the base part

    // Scenario 8: 
    a.demo();
    b.demo();
    c.demo();
    a2->demo();
    a3->demo();

    // Scenario 9: 
    a.display1();
    b.display1();
    c.display1();
    a2->display1();
    a3->display1();

    // Clean up dynamically allocated memory
    delete a2;
    delete a3;

    return 0;
}
