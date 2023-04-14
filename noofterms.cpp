//Program to find the no. of terms in a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    int count =0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(n>0){
        int rem=n%10;
        if(rem>=0){
            count ++;
        }
        n=n/10;
    }
    cout<<"The number of terms are"<<" "<<count;

 
    return 0;
}