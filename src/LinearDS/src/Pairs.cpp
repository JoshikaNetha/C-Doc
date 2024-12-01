#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main(){
    pair<int, string> p1(1, "Alice");
    // pair<int, char> p2 = make_pair(1,"apple");

    cout<<"First-> "<<p1.first<<" second -> "<<p1.second<<endl;

    p1.first = 2;
    p1.second = "Bob";
    cout<<"First-> "<<p1.first<<" second -> "<<p1.second<<endl;

    return 0;
}