#include<iostream>
int search(int arr[],int n,int key);
using namespace std;
int main(){
    int arr[7]={1,2,3,4,3,6,3};
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    int n=7;
    cout<<search( arr,n, key);

    return 0;
}
int search(int arr[],int n,int key){
    //return search(arr,n-1,key);
    if(n<1){
        return -1;
    }
    //return search(arr,n-1,key);
   

    if(key==arr[n-1]){
        
        return n-1;
        
    
    }
    
    
    return search(arr,n-1,key);
    
}