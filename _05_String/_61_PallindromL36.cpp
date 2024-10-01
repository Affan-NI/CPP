#include<iostream>
using namespace std;
int main(){
    string s="abcba";
    int start=0, end=s.size()-1;
    while(start<end){
        if(s[start]==s[end]){
            start++,end--;
        }
        else
        return 0;
    }
    cout<<"palindrom"<<endl;
    string arr[100]={"aaa","sssss"};
    cout<<arr[0];

}