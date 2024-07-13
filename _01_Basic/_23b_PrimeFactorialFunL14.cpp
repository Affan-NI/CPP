#include<iostream>
using namespace std;
bool prime(int n){
    if(n<2) return 0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0) return 0;
    }
    return 1;
}
    // OR
// void prime(int n){
//     if(n<2){
//         cout<<0<<endl;
//         return ;         // yhi se vapas jaao.
//     }
//     for(int i=2; i<=n-1; i++){
//         if(n%i==0){
//             cout<<0<<endl;
//             return ;
//         }
//     }
//     cout<<1<<endl;
//     return ;
// }
int fac(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter A and B number : ";
    cin>>a>>b;
    //A is prime or not.
    cout<<prime(a)<<endl;
    // A ka factorial
    cout<<fac(a)<<endl;
    //B is prime or not.
    cout<<prime(b)<<endl;
    // B ka factorial
    cout<<fac(b)<<endl;
    //B-A is prime or not.
    cout<<prime(b-a)<<endl;
    //B-A ka factorial.
    cout<<fac(b-a)<<endl;

}