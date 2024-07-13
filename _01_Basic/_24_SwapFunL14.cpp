#include<iostream>
using namespace std;
void swap(int &a,int &b){  // yeh zarori nhi ki argument aur parameter ke name same chahiye
    int c;
    c=a;
    a=b;
    b=c;
}
 //   OR
// void swap(int &n,int &m){
//     int c;
//     c=n;
//     n=m;
//     m=c;
// }
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}