#include<iostream>
#include<climits>
using namespace std;
int main (){
    int arr[5]={8,4,9,5,10};
    int ans=INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]>ans)
        ans=arr[i];
    }
    // second max
    int second=INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]!=ans)
         second=max(second,arr[i]);
    }
    cout<<"Second largest Element "<<second;
}