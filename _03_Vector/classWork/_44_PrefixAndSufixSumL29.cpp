#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter array element \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //prifix sum.
    vector<int>prifix(n);
    // My method.
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        prifix[i]=sum;
    }
    //Sir method.
    cout<<endl;
    prifix[0]=arr[0];
    for(int i=1; i<n; i++){
        prifix[i]=prifix[i-1]+arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<prifix[i]<<" ";
    }

    //Suffix Sum.
    cout<<endl;
    vector<int>suffix(n);
    suffix[n-1]=arr[n-1];
    for(int i=n-2; i>=0; i--){
        suffix[i]=suffix[i+1]+arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<suffix[i]<<" ";
    }
}