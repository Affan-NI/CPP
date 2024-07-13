#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cin>>n;
    arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<1000; i++){
        cout<<arr[i]<<" ";
    }
}
