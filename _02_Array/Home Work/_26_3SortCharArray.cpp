#include<iostream>
using namespace std;
int main(){
    char arr[5]={'u','e','o','i','a'};
    for(int i=0; i<=3; i++){
        bool swapped=0;
        for(int j=0; j<=3-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        break;
    }
    for(int  i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}