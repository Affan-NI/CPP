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
    int ans=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<ans) ans=arr[i];
    }
    int secsma=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<secsma && arr[i]!=ans)
        secsma=arr[i];
    }
    
    int thirdsma=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<thirdsma && arr[i]!=ans && arr[i]!=secsma)
        thirdsma=arr[i];
    }
    cout<<"Third smallest element is : "<<thirdsma;
}