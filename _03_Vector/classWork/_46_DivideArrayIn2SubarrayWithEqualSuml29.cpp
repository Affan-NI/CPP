//Divide Array In 2 Subarray With Equal Sum .
#include<iostream>
#include<vector>
using namespace std;
bool divide(vector<int>arr){
    int prefix=0, totalsum=0,n=arr.size();
    for(int i=0; i<n; i++)
    totalsum+=arr[i];

    for(int i=0; i<n-1; i++){
        prefix+=arr[i];
        int ans=totalsum-prefix;
        if(prefix==ans)
        return 1;
    }
    return 0;
}
int main (){
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter array element";
    for(int i=0; i<n; i++)
        cin>>v[i];
    cout<<divide(v);


}