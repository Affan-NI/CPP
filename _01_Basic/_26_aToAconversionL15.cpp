#include<iostream>
using namespace std;
char convert(char &ch){
    char ans= ch-32;
    // sir method
    // char ans=ch-'a'+'A';
    return ans;
}
int main(){
    char ch;
    cout<<"Enter small alphabate : ";
    cin>>ch;
    cout<<convert(ch);

}