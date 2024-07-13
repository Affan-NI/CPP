#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int arr[100];
    int sum=0;
    cout<<"Enter array element : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of array element : "<<sum;

}