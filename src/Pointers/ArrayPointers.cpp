#include <iostream>

using namespace std;

int main(){

  int arr[] ={1,2,3,4,5,6};
  int* arrPtr = arr;
  
  cout<<"arr "   <<arr<<endl;
  cout<<"arrPtr "<<arrPtr<<endl;
  cout<<"*arrPtr "<<*arrPtr<<endl;
  cout<<"*arr "  <<*arr<<endl;

  arrPtr++;
  cout<<"*arrPtr "<<*arrPtr<<endl;
  cout<<"*arr "<<*arr<<endl;
  
  cout << *(arrPtr + 2) << endl;
  cout << *(arrPtr) + 2 << endl;

  int *p = arr;
  cout <<"P :"<<*p << endl;
  cout <<"P without deference :"<< p << endl;  // In char arry it prints whole array 
  cout <<"P[1] :"<<p[0] << endl;

  

    return 0;
}