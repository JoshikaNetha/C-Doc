#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main(){
    pair<int, char> p1 = {(1,'A'),(2,'B'),(3,'C')};
    pair<int, char> p2 = make_pair(1,"apple");


    for(auto i:p1) cout<<i<<" ";


    return 0;
}