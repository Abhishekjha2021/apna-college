//swapping adjacent elements of an array.....
#include<iostream>
void swap(int arr[],int size);
int size;
using namespace std;

int main(){
    int arr[]={20,22,41,12,65};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    swap(arr,size);
    return 0;
}

void swap(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}