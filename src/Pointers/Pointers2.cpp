#include <iostream>

using namespace std;

int main(){
    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    cout << *ptr<<endl;
    cout <<f<<endl;
    *ptr = p;
    cout << *ptr<<endl;
    cout <<f<<endl;
    cout <<p<<endl;
   //ptr points to f. f is incremented by 1 through ptr (f = 11.5 now). f = p using ptr (f = 2.5 now). 

    int a = 7;
    int b = 17;
    int *c = &b;
    *c = 7;
    cout<<a <<" b: "<<b<<" c: "<<*c<<endl;

    a = 100; b = 200;
    int *pt = &a, *qt = &b;
    // *pt = *qt;
    // cout<<pt <<" p: "<<*pt<<" p "<<endl;
    // cout<<qt <<" q: "<<*qt<<" *q "<<endl;
    pt = qt;
    cout<<pt <<" pt: "<<*pt<<" pt "<<endl;

    int e = 7;
    int *g = &e;
    (*g)++;
    cout  << e << "  " << *g << endl;
    g = g + 1; // attempts to dereference c, which now points to an invalid location (one integer size after a's memory). This results in undefined behavior.
    cout  << e << "  " << *g << endl;
    cout  << g << endl;


// #include <iostream>
// using namespace std;
// int main()
// {
//   char arr[20];
//   int i;
//   for(i = 0; i < 10; i++) {
//     *(arr + i) = 65 + i;
//   }
//   *(arr + i) = '\0';
//   cout << arr;
//   return 0;
// }
//*(arr + i) is equivalent to arr[i]. Since arr is an character array, so 65 + i will be typecasted to corresponding character for each i from 0 to 9. Since at last , we are appending the NULL character, so arr will become string and thus we get the output as "ABCDEFGHIJ". 


    return 0;
}