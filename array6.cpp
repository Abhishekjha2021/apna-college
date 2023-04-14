//Program for binary search.......................Reversing an array......

#include<iostream>
using namespace std;

void reverse(int arr[],int size);
void printarray(int arr[],int size);

int main(){

    int arr[5]={55,22,66,44,99};

    reverse(arr,5);
    return 0;
}


void reverse(int arr[],int size){
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}






