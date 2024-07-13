#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N ";
    cin>>n;
    int arr[50];
    cout<<"Enter "<<n-1<<" element of array from 1 to "<<n<<endl;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }
    // sum of array element.
    int sum=0;
    for(int i=0; i<n-1; i++){
        sum+=arr[i];
    }
    // sum of n natural number.
    int sum2=n*(n+1)/2;
    
    cout<<"Missing Element is "<<sum2-sum;


}