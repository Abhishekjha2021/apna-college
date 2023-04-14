#include<iostream>
using namespace std;
int main(){
    int i,n,rem;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        rem=n%i;

        if(rem==0){
            cout<<i<<endl;
        }
    }

    return 0;
 
}

