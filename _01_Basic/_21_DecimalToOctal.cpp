#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int rem,ans=0,mul=1; //mul=1 means 10^0
    while(n>0){
        rem=n%8;
        n=n/8;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans;

}