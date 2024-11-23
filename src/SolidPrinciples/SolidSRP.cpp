#include <iostream>
#include <string>
using namespace std;

//Single Responsibility Principle
/* A class should change only for one reason,meaning it should has only one responsibility
*/
// Class for managing employee details
class Employee {
public:
    string name;
    Employee(const string &name) : name(name) {}
    void display() {
        cout << "Employee: " << name << endl;
    }
};

// Separate class for saving employee data
class EmployeeDB {
public:
    void saveToDB(const Employee &emp) {
        cout << "Saving " << emp.name << " to database." << endl;
    }
};

int main() {
    Employee emp("John Doe");
    EmployeeDB db;
    emp.display();
    db.saveToDB(emp);
    return 0;
}
