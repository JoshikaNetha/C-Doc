#include <iostream>
#include <forward_list>

using namespace std;
int main(){
    forward_list<int> f_List;
    f_List.push_front(10);
    f_List.push_front(20);
    f_List.push_front(30);
    f_List.push_front(40);
    f_List.push_front(50);

    // for(int i=0;i<f_List.max_size();i++){
    //     cout<<f_List[i]<<" ";
    // } won't work
 
    //Accessing
    for(int i:f_List){
        cout<<i<<" ";
    }
    cout<<endl; 


    forward_list<int> f_List1;

    f_List1.assign(5,24);
    //Accessing
    for(int i:f_List1){
        cout<<i<<" ";
    }
    cout<<endl; 

    // 3. emplace_front() - Construct element in-place at the front
    f_List1.emplace_front(3);
    cout << "After emplace_front(3): ";
    for (int n : f_List1) cout << n << " ";
    cout << endl;

    f_List1.pop_front();
    
    for (int n : f_List1) cout << n << " ";
    cout << endl;

    auto fl = f_List1.begin();

    cout<<*fl<<endl;
    //cout<<fl<<endl;// won't work

    f_List1.insert_after(fl,30);

    for (int n : f_List1) cout << n << " ";
    cout << endl;

    f_List1.erase_after(fl);  //remove 2 2

    for (int n : f_List1) cout << n << " ";
    cout << endl;

    f_List1.emplace_after(fl,30);

    for (int n : f_List1) cout << n << " ";
    cout << endl;

    f_List.merge(f_List1);

    for (int n : f_List) cout << n << " M ";
    cout << endl;

    f_List.unique();

    cout<<"\nUnique: Removes consecutive duplicates."<<endl;

    for (int n : f_List) cout << n << " M ";
    cout << endl;


    f_List.sort();

    cout<<"\nsort(): Sorts the list."<<endl;

    for (int n : f_List) cout << n << " S ";
    cout << endl;

    f_List.reverse();

    cout<<"\nreverse(): Reverses the list."<<endl;

    for (int n : f_List) cout << n << " S ";
    cout << endl;

    return 0;
}