#include<iostream>
using namespace std;
int main (){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter element of array "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int n;
    cout<<"Enter no. jiska index pata lagana hai : ";
    cin>>n;
    int ans=0;
    for(int i=0; i<size; i++){
        if(arr[i]==n){
            cout<<"Index of that element : "<<i<<endl;
            ans++;
        }
    }
    if(ans==0)  cout<<"Element not persent  so print "<<-1;
}