// jis element ko find karna hai uski index print karo .if not persent then print -1.
#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int target){
    int start=0, end=n-1, mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]<target)
        start=mid+1;
        else 
        end=mid-1;
    }
    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array,s element "<<endl;
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int target;
    cout<<"Enter your target : ";
    cin>>target;
    cout<<BinarySearch(arr,n,target);
    return 0;
}