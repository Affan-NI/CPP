#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"enter character : ";
    cin>>ch;
    switch(ch){
        case 'a':
        cout<<"Yes";
        break;

        case 'b':
        cout<<"No";
        break;

        default:
        cout<<"Enter vaid character";

    }
}