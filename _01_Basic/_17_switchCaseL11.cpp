#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"Mon";
        break;

        case 2:
        cout<<"tue";
        break;

        case 3:
        cout<<"wed";
        break;

        case 4:
        cout<<"thu";
        break;

        case 5:
        cout<<"fri";
        break;

        case 6:
        cout<<"sat";
        break;

        case 7:
        cout<<"sun";
        break;

        default:
        cout<<"Enter valid day";
    }
}