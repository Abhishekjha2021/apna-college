//Code for Selection sort....................................................................................
#include<iostream>
void sorting(int arr[],int size);
int size;     //Declared the size of array as global variable.......................
using namespace std;

int main(){
    int arr[]={5,80,1,45,22,2,65};
    int size=sizeof(arr)/sizeof(arr[0]);  //Declaring the size of an array...................................

    
    sorting(arr,size);
    return 0;
}

void sorting(int arr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){

            if(arr[j]<arr[i]){
                //swap(arr[i],arr[j]);  //////You may also use swap() function......
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

