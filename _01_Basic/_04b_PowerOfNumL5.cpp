#include<iostream>
using namespace std;
int main (){
    int n,pow,i,num=1;
    cout<<"Enter num : ";
    cin>>n;
    cout<<"Enter power : ";
    cin>>pow;
     for(i=1; i<=pow; i++){
        num=num*n;
     }
     cout<<n<<" to the power "<<pow<<" : "<<num;
}