#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<vector<int>>V(3,vector<int>(4,1));

    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    cout<<V[i][j]<<" ";
    cout<<endl;
    
    int row=V.size();
    int col=V[0].size();

    cout<<"Row = "<<row<<endl;
    cout<<"Column = "<<col<<endl;
}