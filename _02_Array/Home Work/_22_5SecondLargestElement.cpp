#include<iostream>
#include<climits>
using namespace std;
int main (){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[50];
    cout<<"Enter uniqe array's element "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int ans=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>ans) ans=arr[i];
    }
    int seclar=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]> seclar && arr[i]!=ans)
        seclar=arr[i];
    }
    cout<<"Second largest element is : "<<seclar;

}