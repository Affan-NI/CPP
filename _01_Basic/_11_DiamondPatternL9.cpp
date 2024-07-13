#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;

    //yeh n=4 ke liye hai.
    // * * * * * * * *
    // * * *     * * *
    // * *         * *
    // *             *
    // *             *
    // * *         * *
    // * * *     * * *
    // * * * * * * * *

   for(i=n; i>=1; i--){
        // print *
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        //Print space.
        for(j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        // print *
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
   }
   for(i=1; i<=n; i++){
        // print *
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        //Print space.
        for(j=1; j<=2*n-2*i; j++){
            cout<<"  ";
        }
        // print *
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
   }
}