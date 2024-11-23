#include <iostream>
#include <memory>

using namespace std;

class Demo{
    public:
    Demo(string name){
        cout<<"Class Constructor-> "<<name<<endl;
    }

    ~Demo(){
        cout<<"Class Destructor"<<endl;
    }
    void display(){
        cout<<"Demo Class Display Function"<<endl;
    }
     void show(){
        cout<<"Demo Class Show Function"<<endl;
    }
};
int main(){
    shared_ptr<Demo>  sharedPtr1 = make_shared<Demo>("one");
    sharedPtr1->display();

    shared_ptr<Demo>  sharedPtr2;
    sharedPtr2 = sharedPtr1;
    sharedPtr1->display();

    shared_ptr<Demo>  sharedPtr3 = make_shared<Demo>("two");{
        shared_ptr<Demo>  sharedPtr4 = sharedPtr1;
        sharedPtr1->display();
        cout<<"Destructor gets called here, as it goes out of scope"<<endl;
    }
    sharedPtr3->display(); 

    return 0;
}