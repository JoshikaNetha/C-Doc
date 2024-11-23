#include <iostream>
using namespace std;

int main() {
    char Str[] = "abcdefg";
    char *p = Str;
    char * ptr;
    ptr = Str;
    cout << *p << endl;
    cout << p << endl;
    cout << *ptr<<endl;
    cout << ptr<<endl;
    ptr += 2;
    p += 4;
    cout << *p << endl;
    cout << p << endl;
    cout << *ptr<<endl;
    cout << ptr<<endl;


    string str[] = {"joshika","namani","netha"};

    string* pts = str;
    cout<<"pts "<<*pts<<endl;

    pts+= 2;
    
    cout<<"str "<<str<<endl;   // gives address
    cout<<"str "<<*str<<endl; // give str[0]
    cout<<"pts "<<*pts<<endl;


    return 0;
}
