#include <iostream>
#include <queue>
using namespace std;

/*A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. 
In other words, elements are added at the back (or end) of the queue and removed from the 
front. This structure is helpful for tasks where you need to process items in the order they 
arrive, like task scheduling or managing resources in a particular sequence.

Basic Queue Operations

    front(): Returns the element at the front of the queue without removing it.
    back(): Returns the element at the back of the queue without removing it.
    empty(): Checks if the queue is empty.
    size(): Returns the number of elements in the queue.
    
    */

int main() {
    queue<int> q;

    // Enqueue elements
    cout << "Enqueuing elements into the queue:" << endl;
    for (int i = 1; i <= 5; i++) {
        q.push(i);
    }

    cout << "\nQueue size after enqueueing: " << q.size() << endl;

    // Access the front element
    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;
    }

    // Access the back element
    if (!q.empty()) {
        cout << "Back element: " << q.back() << endl;
    }

    // Dequeue elements
    cout << "\nDequeuing elements from the queue:" << endl;
    while (!q.empty()) {
        cout << "Dequeued " << q.front() << endl;
        q.pop();
    }

    // Check if the queue is empty
    if (q.empty()) {
        cout << "\nThe queue is now empty." << endl;
    } else {
        cout << "The queue still has " << q.size() << " elements." << endl;
    }
    
    // queue<int> q1=[67,89,55,43,21,45];// won't work

    queue<int> q1;
      for(int i=10;i<16;i++){
        q1.push(i);
    }


    // q1.swap(q);
    // Accessing and printing all elements in the queue
    while (!q1.empty()) {
        // Print the front element
        std::cout << q1.front() << " ";
        // Remove the front element after printing
        q1.pop();
    }
    
    q.swap(q1);

        // Accessing and printing all elements in the queue
    while (!q.empty()) {
        // Print the front element
        std::cout << q.front() << " ";
        // Remove the front element after printing
        q.pop();
    }
 
    cout<<endl;

    return 0;
}
