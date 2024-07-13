// piche jo code hai v  3 digit tak ke number ka hi binary conversion kar rha tha and 4 digit me
// only 1023 ka hi kiya . ye code 4 digit ka bhi conversion karega.
// esa isliye hai ki hamare binary conversion ki binary value 32 bit se zada hai isliye use long long int me store karaya.
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int rem ;
    long long int ans=0,mul=1; // mul=1 means 10^0
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
}