#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n){
    int count=0;
    while(n){
        count++;
        n/=10;
    }
    return count;
}
void  arms(int n, int digit){
    int num=n, ans=0,rem;
    while(num){
        rem=num%10;
        num=num/10;
        ans=ans+pow(rem,digit);  
    }
    if(ans==n){
        cout<<n<<" is a Armstrong num.";
        return ;
    }
    else {
        cout<<n<<" is not a Armstrong num.";
        return ;
    }
    
}
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int digit=countdigit(n);
    arms(n,digit);
}