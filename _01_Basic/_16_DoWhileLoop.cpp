#include<iostream>
using namespace std;
int main (){
// print sum of n natural number.
    int n;
    cout<<"Enter N : ";
    cin>>n;
    int i=1;
    int sum=0;
    do{
        sum =sum+i;
        i++;
    }while(i<=n);
    cout<<sum;
}