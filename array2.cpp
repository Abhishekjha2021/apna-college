#include<iostream>
using namespace std;
int main(){
    int key=1;
    
    int arr[5]={1,2,3,4,5};
    
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            
            cout<<i;
        }
        else{
            cout<<endl<<"Key not found";
        }
        /*if(arr[i]!=key){
            cout<<"Key not found";
        }*/
       
        
    }
   
    return 0;
}  