#include<iostream>
using namespace std;
int main(){
    string s1="Rohit",s2="Mohit";
    string s3=s1+s2;
    cout<<s3<<endl;
    //or
    s3=s1.append(s2);   // yha s1 append hokar s3 me stor hua.means s1 ki value change hui.
    cout<<s3<<endl;

    s2.push_back('p');
    s2.push_back('p');
    cout<<s2<<endl;
    s2.pop_back();
    cout<<s2<<endl;

    string a="sohit";
    a=a+"p";
    cout<<a<<endl;


}