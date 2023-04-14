#include<iostream>
void bubblesort(int arr[],int size);
int size;
using namespace std;

int main(){
    int arr[]={26,1,22,45,354,0,55,2,33214};
    int size=sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,size);
    return 0;
}

void bubblesort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
