#include<iostream>
void swap(int arr[],int size);
int size;
using namespace std; 

int main(){
    int arr[]={20,22,41,12,65};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    swap(arr,size);
    return 0;
}

void swap(int arr[],int size){
    for(int i=size-1;i>=0;i--){        //Here take i=size-1 , na ki i=size......smgho ab khud .....
       cout<<arr[i]<<" ";
    }
    
}