// number ke factorial ke last me kitne zeros hai.
#include<iostream>
using namespace std;
int zero(int n){
    int count=0;
    while(n>=5){
        count+=n/5;
        n/=5;
    }
    return count;
}
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<zero(n);

}