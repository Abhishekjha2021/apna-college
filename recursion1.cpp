#include<iostream>

using namespace std;
int sortedarrsy(int arr[],int n);

int main(){
    int arr[5]={1,2,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    if (sortedarrsy(arr, n))
        cout << "Yes\n";
    else                                                       
        cout << "No\n";
    //cout<<sortedarrsy(arr[n], n           );
    
    return 0;                                                 
}                                   

int sortedarrsy(int arr[],int n){
    if(n==0 || n==1){
        return 1;
    }
    
    if(arr[n-1] < arr[n-2]){
        return 0;
    }
   
    
    return sortedarrsy(arr,n-1);
}