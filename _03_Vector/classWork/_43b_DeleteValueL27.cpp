#include<iostream>
#include<vector>
using namespace std;
int main(){
    //delete value from vector
    cout<<endl;
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(8);
    arr.push_back(6);
    arr.pop_back();
    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    arr.erase(arr.begin()+1);
    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    //insert Value.
    arr.insert(arr.begin()+1,50);
    for(int i=0; i<arr.size(); i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    //remove all element
    arr.clear();
    cout<<"Size of Vector : "<<arr.size()<<endl;
    cout<<"Capacity of Vector : "<<arr.capacity()<<endl;
}