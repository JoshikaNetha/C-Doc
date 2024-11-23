#include <iostream>
#include <string>
using namespace std;

int main(){

    string str1 = "joshika";
    string str2 ;
    str2 = str1;
    cout<<"str1 "<<str1<<endl;
    cout<<"str2 "<<str2<<endl;
    cout<<"&str1 "<<&str1<<endl;
    cout<<"&str2 "<<&str2<<endl;

    string str3 = "Netha";
    string str4 = move(str3);

    cout<<"str3 "<<str3<<endl;
    cout<<"str4 "<<str4<<endl;
    cout<<"&str3 "<<&str3<<endl;
    cout<<"&str4 "<<&str4<<endl;




    return 0;
}