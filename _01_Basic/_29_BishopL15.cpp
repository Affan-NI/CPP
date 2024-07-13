#include<iostream>
using namespace std;
int moves(int A, int B){
 int count=0;
    count+=min(8-A,8-B);
    count+=min(8-A,B-1);
    count+=min(A-1,B-1);
    count+=min(A-1,8-B);
    return count;
}
int main(){
 int a,b;
 cout<<"Enter row of bishop : ";
 cin>>a;
 cout<<"Enter column of bishop : ";
 cin>>b;
 int total=moves(a,b);
 cout<<"Total no. of ways in 1 moves "<<total;
}