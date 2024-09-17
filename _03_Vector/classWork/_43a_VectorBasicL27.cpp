#include<iostream>
#include<vector>
using namespace std;
int main(){
    // creat vector, declare
    vector<int>v;
    cout<<"Size of V : "<<v.size()<<endl;
    cout<<"Capacity of V : "<<v.capacity()<<endl;
    //insert value
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    cout<<"Size of V : "<<v.size()<<endl;
    cout<<"Capacity of V : "<<v.capacity()<<endl;
    // update value
    v[1]=5;
    for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
    
    cout<<endl;
    vector<int>v1(5,1);
    v1.push_back(8);
    for(int i=0; i<v1.size(); i++)
    cout<<v1[i]<<" ";

    cout<<endl;
    vector<int>v3={1,2,3,4,5};
    for(int i=0; i<v3.size(); i++)
    cout<<v3[i]<<" ";
}