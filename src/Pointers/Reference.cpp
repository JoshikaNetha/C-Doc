#include <iostream>

using namespace std;

int main(){

    int i=10;
    cout<<"i "<<i<<endl;
    cout<<"i add "<<&i<<endl;


    // int &r = &i;
    int &r = i;
    cout<<"r "<<r<<endl;
    cout<<"r address "<<&r<<endl;

    return 0;
}