 #include <iostream>
 #include <list>
 using namespace std;

 int main(){
    //Initializations

    cout<<"Initilization"<<endl;

    list<int> lt{29,38,47,56,10};

    list<int> lt1 = {10,29,38,47,57};

    list<int> lt2;

    lt2.push_front(13);    
    lt2.push_front(12);
    lt2.push_back(18);
    lt2.push_back(19);

    // Accessing through Loop
    
    cout<<"Accessing through Loop"<<endl;

    for(int i:lt)  cout<<i<<" ";
    cout<<endl;

    for(int i:lt1)  cout<<i<<" ";
    cout<<endl;

    for(int i:lt2)  cout<<i<<" ";
    cout<<endl;

    cout<<"List Methods\n";

    cout<<"size() "<<lt.size()<<endl;

    cout<<"front() "<<lt.front()<<endl;
    cout<<"back() "<<lt.back()<<endl;

        //`empty()`: Checks if the list is empty
    cout << "Is myList empty? " << (lt.empty() ? "Yes" : "No") << endl;

    lt.reverse();
    cout << "\nAfter reverse(): ";    
    for(int i:lt)  cout<<i<<" ";
    cout<<endl;

    lt.sort();
    cout << "\nAfter sort(): ";
    for (int val : lt) cout << val << " ";
    cout << endl;

    lt.emplace_front(987);
    cout << "\nAfter emplace_front(): ";
    for (int val : lt) cout << val << " ";
    cout << endl;


    lt.remove(987);
    cout << "After remove(987): ";
    for (int val : lt) cout << val << " ";
    cout << endl;

    lt.insert(lt.begin(),345);
    cout << "After insert(): ";
    for (int val : lt) cout << val << " ";
    cout << endl;
 
    lt.remove_if([](int x) { return x % 2 == 0; });
    cout << "After remove_if (even numbers): ";
    for (int val : lt) cout << val << " ";
    cout << endl;

    list<int> newList = {100, 200};
    lt.splice(lt.begin(), newList);
    cout << "After splice(): ";
    for (int val : lt) cout << val << " ";
    cout << endl;
    
    auto it = lt.begin();
    advance(it, 2);
    lt.insert(it, 25);
    cout << "After insert(25): ";
    for (int val : lt) cout << val << " ";
    cout << endl;

    it = lt.begin();
    advance(it, 2); // 
    lt.erase(it);
    cout << "After erase(2 sition item): ";
    for (int val : lt) cout << val << " ";
    cout << endl;

    // auto it2 = std::next(it, 1);
    // lt.erase(it2);
    // cout << "After erase(25): ";
    // for (int val : lt) cout << val << " ";
    // cout << endl;

    list<char> list1 =  {'A','B','C','D','E'};
    list<char> list2 =  {'z','y','x','w','v','u'};

    cout<<"Splice function types\n";
    cout<<"Type 1\n";
    list1.splice(list1.end(),list2);
    for (char val : list1) cout << val << " ";
    cout << endl;

    cout<<"Type 2\n";
    list1.splice(list1.end(),list2 ,list1.end());
    for (char val : list1) cout << val << " ";
    cout << endl;    
    
    cout<<"Type 3\n";
     // Transfer elements from second to third element of list2 to the end of list1
    auto first = std::next(list2.begin(), 1);
    auto last = std::next(list2.begin(), 3);
    list1.splice(list1.end(),list2 ,first,last);
    for (auto val : list1) cout << val << " ";
    cout << endl;


    
    
 }