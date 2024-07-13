#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;
    // 1 1 1 
    // 2 2 2 
    // 3 3 3
    for(i=1; i<=n; i++ ){
        for(j=1; j<=n; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // 1 2 3 
    // 1 2 3 
    // 1 2 3 
    for(i=1; i<=n; i++ ){
        for(j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // 3 2 1
    // 3 2 1
    // 3 2 1
    for(i=1; i<=n; i++ ){
        for(j=n; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // 1 4 9 
    // 1 4 9 
    // 1 4 9 
    for(i=1; i<=n; i++ ){
        for(j=1; j<=n; j++){
            cout<<j*j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // a a a
    // b b b
    // c c c
    for(i=1; i<=n; i++ ){
        for(j=1; j<=n; j++){
         char ch='a'+i-1;
         cout<<ch<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    // a b c
    // a b c
    // a b c
    for(i=1; i<=n; i++ ){
        for(j=1; j<=n; j++){
         char ch='a'+j-1;
         cout<<ch<<" ";
        }
        cout<<endl;
    }

    // cout<<endl;
    // // 1 2 3
    // // 4 5 6
    // // 7 8 9
    // int a=1;
    // for(i=1; i<=n; i++ ){
    //     for(j=1; j<=n; j++){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }

    cout<<endl;         // without extra varible
    // 1 2 3
    // 4 5 6
    // 7 8 9
    for(i=1; i<=n; i++ ){
        for(j=1; j<=n; j++){
            cout<<(i-1)*n+j<<" ";
            
        }
        cout<<endl;
    }

}