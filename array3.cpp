//Finding maximum and minimum from a given array

#include<iostream>
#include<climits> //make sure to use this header file before using required functions.
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int arr[n];
    int maxno=INT_MIN;
    int minno=INT_MAX;
    cout<<"Declaring the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>maxno){
            maxno=arr[i];

        }
        if(arr[i]<minno){
            minno=arr[i];

        }

    }
    cout<<" Maximum  and Minimum  no's are"<<endl;
    cout<<maxno<<" and "<<minno;
    return 0;


