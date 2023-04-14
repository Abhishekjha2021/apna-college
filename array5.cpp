//Program for Linear search....

#include<iostream>
using namespace std;
int i,key;
bool  search(int arr[],int size,int key);
int main(){
    int key;
    int arr[5]={55,22,65,4,123};
    cout<<"Enter an Element which you wan to find in array"<<endl;
    cin>>key;    //My mistake , i took an integer variable n and took it's value....But at end i was finding for key ,while i have been 
                //declared n instead of key.....

    bool Found=search(arr,5,key);

    if(Found){
        cout<<"Key is present in array";
    }
    else{
        cout<<"Key isn't present in array";
    }
    return 0;
}

bool  search(int arr[],int size,int key){
    for(i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
    