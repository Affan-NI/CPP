#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    //jis trha int array me integer store karte hai. usi trha string array me string ko store karenge.
    string arr[5]={"Affan","Abdullah","Jamia"};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

//ise tarha vector me.
vector<int>b;
b.push_back(4);
cout<<b[0]<<endl;

vector<string>brr;
brr.push_back("Abdullah");
brr.push_back("Affan");
for(int i=0; i<3; i++){
        cout<<brr[i]<<" ";
    }

}