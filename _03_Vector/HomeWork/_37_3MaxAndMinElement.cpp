#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,8,4,9,20,6};
    int min=*min_element(v.begin(),v.end());
    cout<<"Minimum element in vector is : "<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<"maximum element in vector is : "<<max<<endl;

    //OR
    auto minmax=minmax_element(v.begin(),v.end());
    cout<<"Minimum element is : "<<*minmax.first<<endl;
    cout<<"Maximum element is : "<<*minmax.second;
}