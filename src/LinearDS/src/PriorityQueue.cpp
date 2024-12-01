#include <iostream>
#include <queue>

using namespace std;

/*A priority queue is a data structure that works similarly to a regular queue, but with an 
added feature: each element in the queue has a priority associated with it. Elements with 
higher priorities are dequeued before elements with lower priorities. Priority queues are 
commonly used in scheduling algorithms, Dijkstra's shortest path algorithm, and other situations
where elements need to be processed in a specific order based on priority.
stores element in descending order
 C++ priority queue (std::priority_queue) with the default max-heap behavior. */
int main(){
    priority_queue<int> pq;
    // for(int i=20;i<26;i++){
    //     pq.push(i);
    // }
    pq.push(30);  // No need to create an object, just construct it in-place
    pq.push(20);
    pq.push(40);
    pq.push(25);
    pq.push(60);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
       // Using emplace()
    pq.emplace(30);  // No need to create an object, just construct it in-place
    pq.emplace(20);
    pq.emplace(40);
    pq.emplace(25);
    pq.emplace(60);
    cout<<pq.top()<<endl;
       while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    // for(int i=0;i<pq.size();i++){
    //     cout<<pq[i]<<" ";
    // }
    // for(int i:pq){
    //     cout<<i<<" ";
    // }

    return 0;
}