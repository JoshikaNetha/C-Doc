#include <iostream>

using namespace std;
string palindrome(){
string str = "madam";

int mid = str.length()/2;
cout<<"mid "<<mid<<endl;

for(int i=0;i<str.length();i++){
    cout<<"i :"<<i<<endl;
   if(i==mid){ //2 == 2 
      break;
   }
   cout<<" str[i] "<<str[i]<<endl;
   cout<<" str[str.length()]-1*(i+1) "<<str[str.length()-1*(i+1)]<<endl;
   if(str[i]==str[str.length()-1*(i+1)]){
       continue;
   }else{      
     return "Not Palindrome";
   }

 }
    return "Palindrome";
}    

int main(){
    cout<<"Value "<<palindrome()<<endl;
    return 0;
}