#include <iostream>
#include <string>
using namespace std;
class A {
	// Class body is empty for this example
    public:
    //Constructor
    A(){}

    //Parameter Constructor
    A(int num,string name):
    _val(num),_name(name){}

    //Copy Constructor
    A(A &a){
        _val  = a._val;
        _name =a ._name;
    }
    
    //Copy Assignment Operator
    A& operator=(const A& other) {
        cout << "Copy Assignment Operator\n";

        // _val  = other._val;
        // _name = other ._name;
        // if I won't do above statement it not printing _val and _name 
        return *this;
    }

    void demo(){
       cout<<"Class"<<endl;
    }

     void display(string constuctorName){
       cout<<"Value "<<_val<<endl;
       cout<<"Name "<<_name<<endl;
       cout<<"Constructor Type "<<constuctorName<<endl;
    }
    private:
    int _val;string _name;
};

int main() {

    //Constructor
	A a;  // Object `a` of class `A` is created
    a.demo();
    a.display("Constructor");
    
    A b(24,"Constructor");
    b.display("Paramterized");

    A c(b);
    c.display("Copy");

    A d = b;
    d.display("call Copy");
    /*
    A d = c; calls the copy constructor because d is being initialized by copying c. 
    This is an initialization syntax that calls the copy constructor. */

    A e;             // Calls default constructor
    e = d;           // Calls copy assignment operator (assigns `c` to existing object `e`)
    e.display("Copy assignment");

    /*
    
    Even constructor is not exists by default compiler creates below things:
    Compilation:
 	- The compiler translates the preprocessed code into assembly language. Here, it interprets 
    the class definition `class A {}` and the `main` function.
 	- The compiler generates the assembly code for creating an object of type `A` (`A a;`).
 	- During this phase, if program doesn't have any explicitly create constructors, 
      compiler will recognize that there are no explicitly defined constructors, destructors, 
      or assignment operators in class `A`. So, it will automatically generate them:
   	- A default constructor (`A()`)
   	- A copy constructor (`A(const A&)`)
   	- A copy assignment operator (`A& operator=(const A&)`)
   	- A destructor (`~A()`)
 	- These are called *compiler-generated* functions, or *special member functions*, 
      provided by default if not explicitly defined.
      
    */


	return 0;
}
