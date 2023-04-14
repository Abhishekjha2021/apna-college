#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,5,5,6,7,8};
    int key=5;
    for(int i=0;i<8;i++){
        if(arr[i]==key){
            cout<<i;
        }
        
    }
    return 0;
}