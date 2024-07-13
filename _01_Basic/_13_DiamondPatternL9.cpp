#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;
        //    *
        //   * *
        //  * * *
        // * * * *
        // * * * *
        //  * * *
        //   * *
        //    *
    for(i=1; i<=n; i++){
        //space print
        for(j=1; j<=n-i; j++){
            cout<<" ";  // only 1 space.
        }
        //star print.
        for(j=1; j<=i; j++){
            cout<<"* ";    // 1 star 1 space.
        }
        cout<<endl;
    }
    for(i=n; i>=1; i--){
        //space print
        for(j=1; j<=n-i; j++){
            cout<<" ";
        }
        //star print.
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}