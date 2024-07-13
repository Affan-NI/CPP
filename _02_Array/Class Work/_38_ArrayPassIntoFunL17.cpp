#include<iostream>
using namespace std;
void fun(int a[],int n){
    for(int i=0; i<n; i++)
     cout<<a[i]<<" ";
}
int main (){
    int arr[5]={1,2,3,4,5};
    fun(arr,5);
}

// void fun(int a[],int n){
//     for(int i=0; i<n; i++)
//      cout<<a[i]<<" ";
// }
// int main(){
// int n;
// cout<<"Enter size of array ";
// cin>>n;
// int arr[1000];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// fun(arr,n);


// }