#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
// lower bound , upper bound.
    vector<int>drr;
    drr.push_back(5);
    drr.push_back(15);
    drr.push_back(15);
    drr.push_back(54);
    drr.push_back(235);
    cout<<lower_bound(drr.begin(),drr.end(),5)-drr.begin()<<endl;
    cout<<upper_bound(drr.begin(),drr.end(),15)-drr.begin()<<endl;
}