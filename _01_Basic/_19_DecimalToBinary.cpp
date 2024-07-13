#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int rem, ans=0,mul=1;
    while(n>0){
        // remender
        rem=n%2;
        //quotient
        n=n/2;
        //arrang in revers form.
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<"The binary conversion is "<<ans;

//     while(n>0){
//         // remender
//         rem=n%2;
//         //quotient
//         n/=2;
//         //arrang in revers form.
//         ans+=rem*mul;
//         mul*=10;
//     }
//     cout<<"The binary conversion is "<<ans;
}