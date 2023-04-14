//writing a calculator program
#include<iostream>
using namespace std;

int main(){
    int n1,n2,sum,mul,div,mod,sub;
    char ope;
    //taking input from user
    cout<<"Enter the number";
    cin>>n1>>n2;
    cout<<"Enter any operator which youn want to implement on your numbers";
    cin>>ope;

   /* if(ope==+){
        sum=n1+n2;
        cout<<sum;

 }*/
 switch(ope){
    case'+':
    sum=n1+n2;
    cout<<sum;

    case'-':
    sub=n1-n2;
    cout<<sub;
    
    
 }


   
    return 0;

}