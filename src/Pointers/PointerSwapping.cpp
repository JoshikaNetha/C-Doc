#include <iostream>

void swapPointers(int*& ptr1, int*& ptr2) {
    int* temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;
}

int main() {
    int a = 10, b = 20;
    int* p1 = &a;
    int* p2 = &b;

    std::cout << "Before swapping:" << std::endl;
    std::cout << "p1 points to: " << *p1 << std::endl;  // Output: 10
    std::cout << "p2 points to: " << *p2 << std::endl;  // Output: 20

    // Swap pointers
    swapPointers(p1, p2);

    std::cout << "After swapping:" << std::endl;
    std::cout << "p1 points to: " << *p1 << std::endl;  // Output: 20
    std::cout << "p2 points to: " << *p2 << std::endl;  // Output: 10

    return 0;
}

/*// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<endl;
    
    int value = 20;
    int value2 = 30;
    int *ptr = &value;
    int *pt = &value2;
    cout<<"ptr : "<<*ptr;
    cout<<"pt : "<<*pt<<endl;
    
    
    int temp = &ptr;
    ptr = pt;
    pt = &temp;
    
    cout<<"After Swapping "<<endl;
    cout<<"ptr : "<<*ptr;
    cout<<"pt : "<<*pt;
     
    


    return 0;
}*/