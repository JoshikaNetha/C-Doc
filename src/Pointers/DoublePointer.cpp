#include <iostream>
using namespace std;

int main(){
    int value = 24;
    int *ptr = &value;
    cout<<"*ptr "<<*ptr<<" : ptr  "<<ptr<<endl;
    int **dptr = &ptr;  // stores address of pointer doublePtr is a pointer to ptr pointer, which 
    //points to value. Dereferencing doublePtr twice (**doublePtr) yields value, which is 24.
    cout<<"**dptr "<<**dptr<<" : *dptr "<<*dptr<<" : dptr "<<dptr<<endl;

    return 0;
}