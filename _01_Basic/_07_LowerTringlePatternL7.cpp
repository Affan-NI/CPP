#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;
    // 1 
    // 2 2 
    // 3 3 3
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // 1 
    // 1 2 
    // 1 2 3
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // 1
    // 2 1 
    // 3 2 1
    for(i=1; i<=n; i++){
        for(j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // a 
    // b b 
    // c c c
    for(i=1; i<=n; i++){
        char ch='a'+i-1;
        for(j=1; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // 5 
    // 5 4 
    // 5 4 3
    // 5 4 3 2
    // 5 4 3 2 1
    for(i=1; i<=n; i++){
        for(j=n; j>=n-i+1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}