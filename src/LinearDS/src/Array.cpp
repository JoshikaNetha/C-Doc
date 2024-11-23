#include <iostream>
#include <array>
using namespace std;

int main(){
    cout<<"Array Container\n";
    // array<int> arr;  throws error
    // below is One way to create and assign values to Array
    // array<int,5> arr;
    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;
    // arr[3] = 40;
    // arr[4] = 50;

    // array<int,5> arr {{1,2,3,4,5}};  second way
    array<int,5> arr = {1,2,3,4,5};  //third way

    for(int i=0;i<arr.size();i++){
        // 1. Accessing elements using at()
        cout<<arr.at(i)<<endl;
        // cout<<arr[i]<<endl;
    }   
    // 2. Accessing the first and last elements
    cout<<"front "<<arr.front()<<"\n";
    cout<<"back "<<arr.back()<<"\n";

    // 3. Check if the array is empty
    if (!arr.empty()) {
        cout << "Array is not empty." << endl;
    }

    // 4. Iterator

    for(const auto &val: arr ){
        cout<<" value "<<val;
    }
    cout<<"\n";

      // 5. Filling the array with a specific value
    arr.fill(100);
    cout << "Array after fill(): ";
    for (const auto &elem : arr) {
        cout << elem << " ";
    }
    cout <<"\nAfter swapping";
    
   // 6. Swapping two arrays
    array<int,5> arr2{{1,2,3,4,5}} ;
    arr.swap(arr2);
    cout << endl;

    for(const auto &val: arr2){
        cout<<val<<" ";
    }
    cout<<endl;

    // 7. Using data() to get a raw pointer to the array
    int *ptr = arr.data();
    cout<<"Array Data "<<*ptr<<"  "<<*ptr+2<<endl;

    // 8. Iterating using iterators
    cout << "Array elements using iterators: ";
    for(auto i = arr.begin();i!=arr.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // Using cbegin() and cend() for read-only iteration
    cout << "Elements using cbegin() and cend(): ";
    for (auto it = arr.cbegin(); it != arr.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using crbegin() and crend() for read-only reverse iteration
    cout << "Elements using crbegin() and crend() (in reverse): ";
    for (auto it = arr.crbegin(); it != arr.crend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout<<"max_size "<<arr.max_size()<<endl;
    
    return 0;
}

// #include <iostream>
// #include <array>  // Include the array header
// using namespace std;

// int main() {
//     // Declare an array of 5 integers
//     std::array<int, 5> arr = {10, 20, 30, 40, 50};

//     // 1. Accessing elements using at()
//     cout << "Element at index 2 (using at()): " << arr.at(2) << endl;

//     // 2. Accessing elements using operator[]
//     cout << "Element at index 3 (using operator[]): " << arr[3] << endl;

//     // 3. Accessing the first and last elements
//     cout << "First element (using front()): " << arr.front() << endl;
//     cout << "Last element (using back()): " << arr.back() << endl;

//     // 4. Check if the array is empty
//     if (!arr.empty()) {
//         cout << "Array is not empty." << endl;
//     }

//     // 5. Getting the size of the array
//     cout << "Size of the array: " << arr.size() << endl;

//     // 6. Iterating over the array using a range-based for loop
//     cout << "Elements of the array: ";
//     for (const auto &elem : arr) {
//         cout << elem << " ";
//     }
//     cout << endl;

//     // 7. Filling the array with a specific value
//     arr.fill(100);
//     cout << "Array after fill(): ";
//     for (const auto &elem : arr) {
//         cout << elem << " ";
//     }
//     cout << endl;

//     // 8. Swapping two arrays
//     std::array<int, 5> arr2 = {1, 2, 3, 4, 5};
//     arr.swap(arr2);
//     cout << "Array after swap() with arr2: ";
//     for (const auto &elem : arr) {
//         cout << elem << " ";
//     }
//     cout << endl;

//     // 9. Using data() to get a raw pointer to the array
//     int *ptr = arr.data();
//     cout << "First element using raw pointer (data()): " << *ptr << endl;

//     // 10. Iterating using iterators
//     cout << "Array elements using iterators: ";
//     for (auto it = arr.begin(); it != arr.end(); ++it) {
//         cout << *it << " ";
//     }
//     cout << endl;

//     return 0;
// }
