// print nth term of fibonaci.
// 0 1 1 2 3 5 8 ........
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter fibonaci's nth term : ";
    cin>>n;
    int a=0,b=1,c,i;
    if(n==1) cout<<n<<"th term of fibonaci is : "<<a;
    else if(n==2) cout<<n<<"th term of fibonaci is : "<<b;
    else {
        for(i=3; i<=n; i++){
            c=a+b;
            if(i==n)
            cout<<n<<"th term of fibonaci is : "<<c;
            a=b;
            b=c;   
        }
    }
}