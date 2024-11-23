#include<iostream>
using namespace std;
int main(){

    int n = 4;

    int A[n][n];
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        A[i][j] = i+j;
        cout<<A[i][j]<<" ";
        }
    cout<<endl;
    }


int C = 100;
int Temp;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        Temp = A[i][j] + C;
        cout<<"Temp "<<Temp;
        cout<<"   A[j][i] "<<A[j][i]<<endl;
        A[i][j] = A[j][i];
        cout<<"   A[i][j] "<<A[i][j]<<endl;
        A[j][i] = Temp - C;
}
}
cout<<"OUTPUT "<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}

        return 0;

}