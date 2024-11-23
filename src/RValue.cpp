#include <iostream>
#include <vector>
/*
An rvalue is an expression that represents a temporary object or a value that does not have a
persistent memory address. Rvalues are typically used on the right-hand side of an assignment.
They can be thought of as values that are about to be discarded after they are used.
*/

std::vector<int> createVector() {
    std::vector<int> v = {1, 2, 3};
    return v;  // Here, 'v' is an rvalue
}

int main() {
    std::vector<int> myVec = createVector();  // 'createVector()' returns an rvalue
    for (int num : myVec) {
        std::cout << num << " ";  // Outputs: 1 2 3
    }
    return 0;
}
