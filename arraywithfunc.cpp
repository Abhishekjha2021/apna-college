#include<iostream>
using namespace std;
int binarysearch(int arr[],int size , int key );
int main(){
    int arr[5]={45,66,22,3,44};
    int key;
    int size=5;
    cout<<"enter key to search"<<endl;
    cin>>key;
    int c=binarysearch(arr,5, key);
    cout<<c;
    return 0;
}
int binarysearch(int arr[],int size,int key){
    int s=0;int e=5;
    

    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

}