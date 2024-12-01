#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    sector<pair<int, string>> vec;
    vec.emplace(vec.begin(), 1, "First Element");
    vec.emplace(vec.begin(), 2, "Second Element");
    vec.emplace(vec.begin(), 3, "Three Element");
    vec.emplace(vec.begin(), 4, "Four Element");
    vec.emplace(vec.begin(), 5, "Five Element");
    vec.emplace(vec.begin(), 6, "Six Element");

    // std::cout << "Vector element: " << vec[0].first << ", " << vec[0].second << std::endl;

    for(int i=0;i<vec.size();i++){
        cout<<vec[i].first<<" : "<<vec[i].second<<endl;
    }

    return 0;
}