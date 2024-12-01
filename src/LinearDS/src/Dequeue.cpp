#include <iostream>
#include <queue>
#include <deque>

using namespace std;

/* A deque (pronounced as "deck") stands for Double-Ended Queue. It is a type of container in 
C++ (and in many other programming languages) that allows fast insertion and deletion of 
elements at both ends: the front and the back. */

int main(){
    deque<int> dq = {22,33,44,55,66,77};

    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    dq.push_back(88);
    dq.push_front(11);
    cout<<endl;
    for(int i=0;i<dq.size();i++){
        cout<<dq.at(i)<<" ";
    }
    // dq.pop_back();
    // dq.pop_front();

    cout<<endl;

    // cout<<dq.front()<<" ";
    // cout<<dq.back()<<endl;  
    dq.erase(dq.begin() + 4, dq.begin());
      for(int i=0;i<dq.size();i++){
        cout<<dq.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}