#include<iostream>
using namespace std;
int main(){

    int row,col;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>row>>col;

    //printing star pattern when rows and column both are given-------------------------

    for(int i=1;i<=row;i++){
        for(int j =1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}