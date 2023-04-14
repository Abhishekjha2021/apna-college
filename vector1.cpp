// Online C++ compiler to run C++ program online
#include <iostream>
//#include<vector>
using namespace std;

int main() {
    int n;
    // Write C++ code here
    //std::cout << "Hello world!";
    int arr1[5]={1,2,5,4,8};
    int arr2[4]={8,9,7,6};
    int m=(sizeof arr1)/sizeof(arr1[0]);
    //cout<<m<<endl;
    int k=(sizeof arr2)/sizeof(arr2[0]);
    
    
    int arr3[n];
    
    if(m>k){
        n=m;
    }
    else{
        n=k;
    }
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        arr3[i]=(arr1[i]+arr2[i]);
    }cout<<" ";
    for(int i=0;i<n;i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}