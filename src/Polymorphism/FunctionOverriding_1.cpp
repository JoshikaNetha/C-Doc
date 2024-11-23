#include <iostream>
using namespace std;
class A{
    public:
        virtual void display(){
            cout<<"Parent class A"<<endl;
        }

};
class B:public A{
    public:
        void display(){
            cout<<"Child class B"<<endl;
        }

};
class C:public A{
    public:
        void display(){
            cout<<"Child class C"<<endl;
        }

};
int main(){
    A a;
    B b;
    a.display();
    b.display(); // if child class doesn't contain display it will call parent class function.
    
    A a1 = b;   
    a1.display(); // calling parent function

    A *a2 = new B();
    a2->display();

    A *a3 = new C();
    a3->display();


    return 0;
}