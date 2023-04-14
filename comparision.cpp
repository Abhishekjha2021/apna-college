#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    //We have to compare three numbers.

    cout<<"The three no's are:";
    cin>>a>>b>>c;

    //Checking the condition's

    if(a>b){
        if(b>c)
        cout<<"a is the largest number";
    }

    else if(b>c)
    cout<<"b is the largest number";

    else
    cout<<"c is the largest value";

    return 0;
}
