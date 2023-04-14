
    
#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,i,nextterm,n;

    cout<<"Enter the term upto which you want to find the fibonacci series\n";
    cin>>n;
    cout<<"The Febonacci series is "<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    
    
    for(i=1;i<=n-2;i++){
        

        

        nextterm=n1+n2;
        cout<<nextterm<<endl;

        n1=n2;
        n2=nextterm;

    }

    return 0;
}