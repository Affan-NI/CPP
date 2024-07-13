#include<iostream>
using namespace std;

int sum(int m,int n){ //function declare
    int sum=m+n;        // function define.
    return sum;
}
void mul(int m,int n){
    int ans=m*n;
    cout<<ans<<endl;      // yha hame kuch return karne ki zaroorat nhi hai
}                         //kuki hame print karva diya.aur isliy return type bhi void likha.
void fun(){
    cout<<"Coder army";
}
int main(){
    int a,b;
    cout<<"Enter Two number : ";
    cin>>a>>b;
    // Function call.
    int ans=sum(a,b);
    cout<<ans<<endl;
    mul(a,b);
    fun();
    
}