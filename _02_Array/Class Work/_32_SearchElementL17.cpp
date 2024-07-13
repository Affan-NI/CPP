// element search karo aur uska index print karo yadi v nhi hai to -1 print karo.
#include<iostream>
using namespace std;
int main (){

    int arr[5]={2,4,8,11,6};
    int n;
    cout<<"Enter no. jiska index pata lagana hai : ";
    cin>>n;
    int index=-1;
    for(int i=0; i<5; i++){
        if(arr[i]==n){
            index=i;
            break;
        }
    }
    cout<<index;
}