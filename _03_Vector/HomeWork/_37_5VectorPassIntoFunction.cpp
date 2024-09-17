#include<iostream>
#include<vector>
using namespace std;
// pass by value.
void func(vector<int> v){
    v.push_back(30);
}
//pass by refrence.
void funcr(vector<int>& v){
    v.push_back(30);
}
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(24);
    func(v);
    for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
    cout<<endl;

    funcr(v);
    for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ";
}