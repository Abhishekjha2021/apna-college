#include<iostream>
using namespace std;
void func(int arr[],int size);
void printArray(int arr[],int size);
int main(){
    int arr[4]={1,2,3,4};
    func(arr,4);
    printArray(arr,4);
    return 0;

}
void func(int arr[],int size){
    for(int i=0;i<size;i++){
        if((i+1)<i){
            swap(arr[size-i],arr[i]);
            
            
        }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}