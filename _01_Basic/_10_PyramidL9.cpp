#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;
    //        *
    //      * * *
    //    * * * * *
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=2*i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
  // 2nd method.
    cout<<endl;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){  
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        for(j=1; j<=i-1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}