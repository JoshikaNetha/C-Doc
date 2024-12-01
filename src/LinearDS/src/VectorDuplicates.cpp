// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Write C++ code here
    
    vector<int> a={1,2,3,4,2,5};
    bool duplicateFound = false;
    
    for(int i = 0;i < a.size(); i++){
        for(int j = i+1 ; j < a.size(); j++){
            if(a[i] == a[j] ){
                cout<<"Duplicate Found"<<endl;
                a.erase(a.begin()+j);
                duplicateFound = true;
                // j--;
                // break;
            }
        }
    }
    if(!duplicateFound){
        cout<<"Duplicate Not Found"<<endl;
    }

    return 0;
}