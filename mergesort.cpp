// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr[],int s,int mid,int e){
    int n1=mid-s+1;
    int n2=e-mid;
    int a[n1];
    int b[n2];
    int i=0,j=0,k=s;
    //int k=0;
    for(int i=0;i<n1;i++){
        a[i]=arr[s+i];
    }
    for(int j=0;j<n2;j++){
        b[j]=arr[mid+1+j];
    }
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;i++;
        }
        else{
            arr[k]=b[j];
            k++;j++;
        }
    }
    while(i<n1){
        arr[k]=a[i];
            k++;i++;
    }
    while(j<n2){
        arr[k]=b[j];
        k++;j++;
    }
    
}
void mergesort(int arr[],int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        mergesort(arr,s,mid);
         mergesort(arr,mid+1,e);
          merge(arr,s,mid,e);
    }
}

int main() {
   int arr[]={8,2,1,9,0,3,10,11,88};
   int size=sizeof arr/sizeof arr[0];
   int s=0;
   int e=size-1;
   
   mergesort(arr,s,e);
   display(arr,size);
   

    return 0;
}