#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
//search in binary search 
    vector<int>crr;
    crr.push_back(5);
    crr.push_back(15);
    crr.push_back(54);
    crr.push_back(235);
    sort(crr.begin(),crr.end()); // increasing.
    cout<<binary_search(crr.begin(),crr.end(),5)<<endl;

    //number of occurence
    int n=count(crr.begin(),crr.end(),5);
    cout<<n<<endl;

    
    //print index of search element
    cout<<find(crr.begin(),crr.end(),54)-crr.begin()<<endl;
    
    // min , max element ka index.
    int m=max_element(crr.begin(),crr.end())-crr.begin();
    cout<<m<<endl;
    int p=min_element(crr.begin(),crr.end())-crr.begin();
    cout<<p<<endl;
}