#include<iostream>
using namespace std;
void swap(int &a,int &b){ 
    int c;
    c=a;
    a=b;
    b=c;
}
void swap(float &f1, float &f2){   // fun same ho sakta hai lekin unke parameter different type ke hone chahiye.
    float c;
    c=f1;
    f1=f2;
    f2=c;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1=3.14,f2=5.60;
    swap(f1,f2);
    cout<<f1<<" "<<f2<<" ";
}