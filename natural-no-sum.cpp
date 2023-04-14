#include<iostream>
using namespace std;
int sum(int m);

int main(){
    int n;
    

    sum(n);

    return 0;
}

/*int sum(int m){
    int n;
    cout<<"Enter the no. upto which you want to get sum"<<endl;------------------you may also use this method............
    cin>>n;
    
    int total;
    total=(n*(n+1))/2; 
    cout<<total;
}*/
int sum(int m){
    int i,n;
    int ans=0; 
    cout<<"Enter the no. upto which you want to get sum"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        ans+=i;
        
    }
    cout<<ans;
}