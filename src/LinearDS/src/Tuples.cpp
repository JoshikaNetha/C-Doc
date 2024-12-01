#include <iostream>
#include <utility>
#include <tuple>
#include <string>
using namespace std;
/*No, a tuple is not a list in C++. Here’s a detailed comparison and explanation of what a 
tuple is and how it differs from a list:*/
int main(){
    // tuple<int, string> tuple1 = {(1,"Naruto"),(2,"Shikimar"),(3,"Jiraya"),(4,"Minato"),(5,"Kushino")};
    // for(int i=0 ;i<tuple1.size();i++){
    //     cout<<tuple1[i].first<<" ";
    // }
    // function(auto t : tuple1){
    //     cout<<t.first<<" ";
    // }

    tuple<int, string, double,float , char> myTuple(42, "Example", 3.14, 22.7f, 'B');

    cout << "Integer: " << get<0>(myTuple) << endl;
    cout << "String: " << get<1>(myTuple) << endl;
    cout << "Double: " << get<2>(myTuple) << endl;
    cout << "String: " << get<3>(myTuple) << endl;
    cout << "Double: " << get<4>(myTuple) << endl;
    cout<<endl;

    std::tuple <char, int, int> wow; 
    wow = std::make_tuple('a', 15, 12);

    std::tuple <char, int, int> wow1; 
    wow1 = std::make_tuple('b', 30, 40);

      // Declare the variables to unpack the tuple
    char a;
    int b;
    int c;


    tie(a,b,c) = wow;

    cout<<a<<" "<<b<<" "<<c<<endl; 

    wow.swap(wow1);

    cout << "wow1 CHAR: "<< get<0>(wow1)<< endl;
    cout << "wow : "<< get<0>(wow)<< endl;


    cout << "wow1 Integer: "<< get<1>(wow1)<< endl;
    cout << "wow : "<< get<1>(wow)<< endl;


    cout << "wow1 Integer: "<< get<2>(wow1)<< endl;
    cout << "wow : "<< get<2>(wow)<< endl;

    auto combined = tuple_cat(wow,wow1);
    // Access the concatenated tuple
    cout << "Combined Tuple:" << endl;
    cout << "First Element: " << get<0>(combined) << endl;
    cout << "Second Element: "<< get<1>(combined) << endl;
    cout << "Third Element: " << get<2>(combined) << endl;
    cout << "Fourth Element: "<< get<3>(combined) << endl;
    cout << "Fifth Element: " << get<4>(combined) << endl;
    cout << "Sixth Element: " << get<5>(combined) << endl;
    
    // cout << "Sixth Element: " << combined.get(1)<< endl;



    return 0;
}
