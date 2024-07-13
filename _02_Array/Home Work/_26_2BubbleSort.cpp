// sort in incresing order in such a way 1st pass me smallest element starting me aa jaye.

#include<iostream>
using namespace std;
int main(){
    int arr[1000];
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter array's element "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n-1; i++){
        bool swapped=0;
        for(int j=n-1; j>=i; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                swapped=1;
            }
        }
        if(swapped==0)
        break;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}