#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //sorting
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(78);
    // sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;

    // sort in decreasing
    sort(ans.begin(),ans.end(),greater<int>());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;
    //or
    sort(ans.rbegin(),ans.rend());
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<" ";
    cout<<endl;
}