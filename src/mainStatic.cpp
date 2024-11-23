#include <iostream>
#include <Demo.h>
using namespace std;
static void staticFunction();
static int value = 10;
int nonStaticVariable = 20;
void nonStatic(int val);
// class Demo{
//     public:
    
//     static void demofunction(){
//         cout<<"[Its Demo class demofunction]"<<endl;
//     }
// };
int main(){
    cout<<"[its main function]"<<endl;
    Demo d;
    d.demofunction("object");
    Demo::demofunction("class Name");
    // void nonStatic();
    nonStatic(value);
    // staticFunction();
    return 0;
}

void nonStatic(int val){   
     staticFunction();
    cout<<"[its Non static function] "<<nonStaticVariable<<endl;

}

void staticFunction()
{
    cout<<"[its static function]"<<endl;
}
