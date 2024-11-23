#include <iostream>
#include <algorithm>

void removeDuplicates(int arr[], int& size) {
    // Step 1: Sort the array
    std::sort(arr, arr + size);

       for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    
    // Step 2: Use a new index to keep track of unique elements
    int uniqueIndex = 0;
    
    // Step 3: Loop through sorted array and add unique elements to uniqueIndex
    for (int i = 1; i < size; ++i) {
        if (arr[uniqueIndex] != arr[i]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        
        }
    }
    
    // Update size to reflect the new number of elements (unique ones only)
    size = uniqueIndex + 1;
}

int main() {
    int arr[] = {4, 2, 2, 3, 4, 5, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    removeDuplicates(arr, size);
    
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
