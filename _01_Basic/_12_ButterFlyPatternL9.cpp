#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;
           // n=4 ke liye hai.
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * * 
    // * * *     * * *
    // * *         * *
    // *             *
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        for(j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=n-1; i>=1; i--){
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        for(j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}