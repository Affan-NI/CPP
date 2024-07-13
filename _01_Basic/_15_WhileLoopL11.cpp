#include<iostream>
using namespace std;
int main (){
// Print factor of a number.
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int i=1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
        i++;
    }
}