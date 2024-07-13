#include<iostream>
using namespace std;
int main(){
    int a=12121;
    char c='a';
    c=a;          // data loss hua 
    cout<<c<<endl;
    a=c;           // isiliye a ki value change hue.
    cout<<a<<endl;
}