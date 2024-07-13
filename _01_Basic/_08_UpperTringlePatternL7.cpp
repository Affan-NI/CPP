#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"Enter N";
    cin>>n;
    // * * * 
    // * *
    // * 
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // OR 2nd method
    // for(i=n; i>=1; i--){
    //     for(j=1; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    cout<<endl;
    // 1 2 3 4
    // 1 2 3 
    // 1 2 
    // 1
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}