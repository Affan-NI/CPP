#include<iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"Enter N : ";
    cin>>n;
    //      *
    //    * *
    //  * * *  
    for(i=1; i<=n; i++){
        //space print
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        //star print.
        for(j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    cout<<endl;
    //     1
    //   2 2
    // 3 3 3
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //       1
    //     1 2
    //   1 2 3
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    //      A
    //    A B 
    //  A B C 
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=1; j<=i; j++){
            char ch='A'+j-1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    //     1
    //   2 1
    // 3 2 1
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }



}