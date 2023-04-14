#include<iostream>
using namespace std;
int pascal(int m);
int fact(int m);
int m=5;
int main(){
    int m,n;

    pascal(m);
    return 0;
}

int pascal(int m){
    int ans;

    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){

            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
    }
    
}

int fact(int m){
    int fact=1;
    for(int k=0;k<m;k++){
        fact=fact*k;

    }
    return fact;
}