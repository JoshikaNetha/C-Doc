#include <iostream>
#include <memory>  
using namespace std;

class Demo{
    public:
    Demo(){
        cout<<"Class Constructor"<<endl;
    }

    ~Demo(){
        cout<<"Class Destructor"<<endl;
    }
    void display(){
        cout<<"Demo Class Display Function"<<endl;
    }
};
int main(){

    unique_ptr<Demo>  uniquePtr = make_unique<Demo>();
    uniquePtr->display();


    unique_ptr<Demo>  uniquePtr2 = make_unique<Demo>();
    uniquePtr2->display();

    unique_ptr<Demo>  uniquePtr3;
    uniquePtr3 = move(uniquePtr);
    if(!uniquePtr){
        cout<<"object moved successfully"<<endl;
    }
    uniquePtr3->display();

    // unique_ptr<Demo>  uniquePtr2 ;
    // uniquePtr2 = uniquePtr;   Error: unique_ptrs cannot be copied

    return 0;
}