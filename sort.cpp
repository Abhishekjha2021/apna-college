#include<iostream>
using namespace std;
int main(){
    int x;
    int arr[]={5,6,8,1,2};
     x=sizeof (arr)/sizeof (arr[0]);
    cout<<x;
    return 0;
}
