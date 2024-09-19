#include<iostream>
using namespace std;
void digosum(int arr[][3],int row, int col){
   int first=0;
    int second=0;
    // first dioganal sum
    int i=0;
    while(i<row){
        first+=arr[i][i];
        i++;
    }
    cout<<"1st diagonal sum is "<<first<<endl;

    i=0;
    int j=col-1;
    while(i<row){
        second+=arr[i][j];
        i++;
        j--;
    }
    cout<<"2nd diagonal sum is "<<second;
}
int main (){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    digosum(arr,3,3);
}