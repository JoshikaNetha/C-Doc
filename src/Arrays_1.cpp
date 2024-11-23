#include <iostream>
using namespace std;

int main() {
    int a[] = {5,1,15,20,25};
    int i, j, k;
    i = ++a[1]; 
    cout << i <<endl;
    j = a[1]++;
    cout << i << " " << j<<endl;
    k = a[i++];

    cout << i << " " << j << " " << k<<endl;
    return 0;
}