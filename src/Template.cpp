#include <iostream>
using namespace std;

template<typename t> t sum(t x,t y){
    return x+y;
}
// t add(t value){  requires separate template<typename t>
//     cout<<"Its Template function"<<endl;
//     return value;
// }

template<typename Temp>

class Demo{
    private:
    Temp value;
    public:
    void setT(Temp val){
        value = val;
    }
    Temp getT(){
        return value;
    }
};
int main(){
    cout<<sum(20,30)<<endl;
    cout<<sum(3.5,2.5)<<endl;

// Template Class
    Demo<int> demoInt;
    demoInt.setT(20);
    cout<<demoInt.getT()<<endl;


    Demo<float> demoFloat;
    demoFloat.setT(24.3);
    cout<<demoFloat.getT()<<endl;

    add(30);

    return 0;
}