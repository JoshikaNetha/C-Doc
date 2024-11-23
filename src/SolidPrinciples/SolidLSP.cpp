#include <iostream>
using namespace std;
//Liskoc Substitution Principle
//Definition:Derived class should be substitutable for their base class without altering 
// correctness of the program

class Vehicle{
    public:
    virtual void drive(){
        cout<<"Vehicle can drive\n";
    }
};
class PX4 :  public Vehicle{
    public:
        void drive() override{
            cout<<"PX4 can drive\n";
        }
};
class Ardu :  public Vehicle{
    public:
        void drive() override{
            cout<<"Ardu can drive\n";
        }
};
void drive(Vehicle &vehicle){
     vehicle.drive();
}
int main(){
    PX4 px;
    Ardu ardu;
    drive(px);
    drive(ardu);
    return 0;
}