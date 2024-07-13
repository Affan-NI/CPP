#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a octal Number ";
    cin>>n;
    int rem,ans=0, mul=1; // mul=1 means 8^0
    while(n>0){
        rem=n%10;
        n=n/10;
        ans=ans+rem*mul;
        mul=mul*8;
    }
    cout<<ans;
}