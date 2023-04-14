#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    cout<<"Declaring array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Sum of array elements is"<<endl;
    for(int i=0;i<5;i++){
        sum+=arr[i];
        
    }
    cout<<sum;

    return 0;
}