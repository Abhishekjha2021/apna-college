#include<iostream>

int binarysearch(int arr[],int n,int key);
using namespace std;
int main(){
    int key;
    int arr[9]={1,2,3,4,5,6,7,8,9};//Mistake done by me---i was not arranging data in ascending order...........
    //int size=sizeof(arr)/sizeof(arr[0]);
    int n=9;
    cout<<"Enter a key to search in array"<<endl;
    cin>>key;
    cout<<binarysearch(arr,n,key);//Note as you have taken int function in declaration & defination part....so, make sure 
                            //assign binarysearch(arr,n,key) to any variable of type int..eg--int c=binarysearch(--);
                            //and then write cout<<c;
    return 0;
}

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            //cout<<mid;--------as you have taken int type function so, you cann't use cout<<---.....infact you will have to use return--;
            return mid;
           
            
        }
        else if(arr[mid]<key){
            s=mid+1;

        }
        else {
            e=mid-1;
        }
        
    }
    
}