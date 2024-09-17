#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //method of o(n^2) comp.
    // int maxi=INT_MIN;
    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         maxi=max(maxi,arr[j]-arr[i]);
    //     }
    // }
    // cout<<"Max difference is "<<maxi;

    //optimize method o(n).
    int maxi=INT_MIN;
    vector<int>sufix(n);
    sufix[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--){
        sufix[i]=max(arr[i],sufix[i+1]);
    }
    for(int i=0; i<n-1; i++){
        maxi=max(maxi,arr[i]-sufix[i+1]);
    }
    cout<<"Max difference is "<<maxi;
}