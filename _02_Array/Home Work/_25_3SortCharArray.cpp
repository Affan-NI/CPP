#include<iostream>
using namespace std;
int main(){
    char arr[5]={'u','e','o','i','a'};
    for(int i=0; i<4; i++){
        int index=i;
        for(int j=i+1; j<5; j++){
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int  i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}