#include<iostream>
#include<climits>
using namespace std;
int main (){
    int m,n;
    cout<<"Enter row ";
    cin>>m;
    cout<<"Enter col";
    cin>>n;
    int arr[100][100];
    cout<<"enter array element";
    for(int i=0; i<m; i++)
    for(int j=0; j<n; j++)
    cin>>arr[i][j];

    int Max=INT_MIN,sum,index;
    for(int i=0; i<m; i++){
        sum=0;
    for(int j=0; j<n; j++){
        sum+=arr[i][j];
    }
        if(sum>Max){
            Max=sum;
            index=i;
        }
    }
    cout<<index;
}