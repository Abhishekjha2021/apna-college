#include<iostream>
using namespace std;
int main(){

    int row;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>row;

    //printing star pattern when only rows are given-------------------------

    for(int i=1;i<=row;i++){
       /* for(int j =1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;*/
        cout<<"*"<<"*"<<endl;
    }
    return 0;
}