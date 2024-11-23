#include <iostream>
#include <queue>
using namespace std;

/*A queue is a linear data structure that follows the First-In-First-Out (FIFO) principle. 
In other words, elements are added at the back (or end) of the queue and removed from the 
front. This structure is helpful for tasks where you need to process items in the order they 
arrive, like task scheduling or managing resources in a particular sequence.

Basic Queue Operations

    enqueue(): Adds an element to the back of the queue.
    dequeue(): Removes an element from the front of the queue.
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
        cout << "Enqueued " << i << endl;
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

    return 0;
}
