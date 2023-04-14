#include<iostream>
using namespace std;
int main(){

    int row,col;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>row>>col;

    //printing star pattern when only rows are given-------------------------

    for(int i=1;i<=row;i++){
        for(int j =1;j<=col;j++){
            if(j==1||j==col||i==1||i==row){  //If you will start taking i or j with 0, then oyu will foung wrong output...... 
                cout<<"*";

            }
           
            else{
                cout<<" ";
                //break;...---------don't usse it otherwise you will get wrong output.. 
            }

        }
        cout<<endl;
        
    }
    return 0;
}