#include<iostream>
using namespace std;
int main(){

    char ch='a';

   // int m=(int)ch-((int)ch-1);

    char x2;
    cout<<"Enter the character to find it's position"<<endl;
    cin>>x2;
    cout<<(int)x2-(int)ch+1;    //or (int)x2-64;

   
    return 0;
}