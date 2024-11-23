#include <iostream>
#include <vector>

using namespace std;

/*
A vector in C++ is a dynamic array provided by the Standard Template Library (STL). 
Unlike arrays, vectors can resize automatically when elements are added or removed, 
which makes them very flexible for managing data when the size of the data set is unknown at 
compile time.

Basic Functions of std::vector

    push_back(): Adds an element to the end of the vector.
    pop_back(): Removes the last element from the vector.
    size(): Returns the number of elements in the vector.
    empty(): Checks if the vector is empty.
    clear(): Removes all elements from the vector.
    at(index): Returns the element at the specified index, with bounds checking.
    front(): Returns the first element in the vector.
    back(): Returns the last element in the vector.
    insert(): Inserts elements at a specified position.
    erase(): Removes elements at a specified position or range.
    resize(): Changes the size of the vector.
    begin() and end(): Returns iterators to the beginning and end of the vector.
    rbegin() and rend(): Returns reverse iterators for backward traversal.
    swap(): Swaps the contents of two vectors.
    */
   
int main() {
    vector<int> vec;

    // Add elements using push_back()
    cout << "Adding elements using push_back:" << endl;
    for(int i=0;i<5;i++){
        vec.push_back(i+1);
    }

    //Accessing Items
    for(const auto &val: vec){
        cout<<val<<" ";
    }
    cout<<endl;

    //Accessing Items
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;

    vector<int> vec2{10,20,30,40,50};

    cout<<"back "<<vec2.back()<<endl;
    cout<<"front "<<vec2.front()<<endl;
    vec2.pop_back();  //pop_back 
    vec2.insert(vec2.end()-1, 24);   //insert
    int *p = vec2.data();
    cout<<"Data "<<*p<<endl;

       //Accessing Items
    for(int i=0;i<vec2.size();i++){
        cout<<vec2.at(i)<<" ";
    }
    cout<<endl;


    //remove an item with index
    vec2.erase(vec2.end()-2);

           //Accessing Items
    for(int i=0;i<vec2.size();i++){
        cout<<vec2.at(i)<<" ";
    }
    cout<<endl;

    //Resizing the vector
    vec.resize(6, 100);
    std::cout << "After resizing to 5 elements (new elements initialized to 100): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    vector<int>  vec3;

    vec3.assign(6,30);

    for(int num:vec3){
        cout<<num<<" ";
    }
    std::cout << std::endl;
    
    return 0;
}
