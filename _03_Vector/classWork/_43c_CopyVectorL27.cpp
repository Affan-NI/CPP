#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>brr;
    brr.push_back(1);
    brr.push_back(2);
    brr.push_back(3);
    brr.push_back(8);
    brr.push_back(6);
    cout<<brr[0]<<endl;
    cout<<brr.front()<<endl;
    cout<<brr[brr.size()-1]<<endl;
    cout<<brr.back()<<endl;

    // copy of 1 vector to another.
    vector<int>a;
    a=brr;
    for(int i=0; i<a.size(); i++)
    cout<<a[i]<<" ";
    cout<<endl;
    //Or
    for(auto it=a.begin(); it!=a.end(); it++)
    cout<<*it<<" ";
    cout<<endl;
    //or
    for(auto i:a)
    cout<<i<<" ";
    cout<<endl;
}