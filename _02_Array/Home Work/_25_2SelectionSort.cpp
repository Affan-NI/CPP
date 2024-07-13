// sort inc. order 
// pehle sabse bada element ko sabse last me rakho.
#include<iostream>
using namespace std;
int main (){
    int arr[1000];
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter the element of array "<<endl;
    for(int  i=0; i<n; i++){
        cin>>arr[i];
    }
    // for(int i=0; i<n-1; i++){
    //     int index=n-1-i;
    //     for(int j=0; j<n-1-i; j++){
    //         if(arr[j]>arr[index])
    //         index=j;
    //     }
    //     swap(arr[n-1-i],arr[index]);
    // }
    // for(int  i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=n-1; i>0; i--){
        int index=i;
        for(int j=0; j<i; j++){
            if(arr[j]>arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int  i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}