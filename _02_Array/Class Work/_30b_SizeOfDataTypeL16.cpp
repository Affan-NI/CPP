#include<iostream>
using namespace std;
int main(){
// sizeof() ek inbuilt func. hai jo data type ka size deta hai. 
    int a;
    cout<<sizeof(a)<<endl;

    bool b=true;
    cout<<sizeof(b)<<endl;

    int arr[5]={1,2,3,4,5};
    cout<<sizeof(arr)<<endl; // 20 answer diya kuki int 4 byte ka hota hai. yha 5 int ke dabbe hai.
    
    // array ka size find karne ke liye.
    int brr[]={1,2,3,4,5};
    cout<<sizeof(arr)/sizeof(brr[0])<<endl;
}