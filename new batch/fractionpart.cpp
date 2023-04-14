#include<iostream>
using namespace std;
int main(){

   

    float x3=-9.7;
    
    int y=(int)x3;
    if(x3<0){
        y=(int)x3-1;
    }

    cout<<x3-y;
    return 0;
}