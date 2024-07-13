#include<iostream>
using namespace std;
int main (){
    int arr[5]={1,2,5,6,3};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    // jinme element nhi hai unme zero daal deta hai.
    cout<<endl;
    int brr[6]={1,2,5};
    for(int i=0; i<6; i++){
        cout<<brr[i]<<" ";
    }

    // //wrong method.  lekin kaam kar jayga.
    // int size;
    // cout<<"Enter size : ";
    // cin>>size;
    // int crr[size];
    // for(int i=0; i<size; i++){
    //      cin>>crr[i];
    // }
    
    cout<<endl;
    // right method.
    int size;
    cout<<"Enter size : "; // condition 0 to 999.
    cin>>size;
    int crr[1000];
    for(int i=0; i<size; i++){
        cin>>crr[i];
    }
    for(int i=0; i<size; i++){
        cout<<crr[i]<<" ";
    }
}