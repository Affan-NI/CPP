#include<iostream>
using namespace std;
int main(){
    char arr[5]={'a','p','p','l','e'};
    for(int i=0; i<5; i++)
    cout<<arr[i];
    cout<<endl;

    char brr[10];
    cin>>brr;
    cout<<brr;
    cout<<endl;


    char crr[10];
    cin>>crr;
    crr[2]='\0';
    cout<<crr;
}