//Program for swapping the adjecent value of an array..........
#include<iostream>
using namespace std;
void func(int arr[],int size);
void printarray(int arr[],int size);
int main(){
    int arr[5]={22,33,55,44,66};

    func(arr,5);
    printarray(arr,5);
    return 0;
}

void func(int arr[],int size){
    for(int i=0;i<size;i+=2){

        if((i+1)<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}