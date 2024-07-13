#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Binary number : ";
    cin>>n;
    // Binary to decimal.
    int ld,ans=0,mul=1; // mul=1 means 2^0
    while(n>0){
        // last digit.
        ld=n%10;
        n=n/10;
        ans=ans+ld*mul;
        mul=mul*2;
    }
    //decimal to octal.
    int rem,result=0,mul1=1; // mul=1 means 10^0
    while(ans>0){
        rem=ans%8;
        ans=ans/8;
        result=rem*mul1+result;
        mul1=mul1*10;
    }
    cout<<result;
    
}