#include<iostream>
using namespace std;
void feb(int a);

int main(){
    int a;
    feb(a);
    return 0;
   

}
void feb(int a){
    int nextterm;
    int n;  
    cout<<"Enter n upto which you want to get the febonacci series"<<endl;
    cin>>n;

    int n1=0;
    int n2=1;
    cout<<"The febonacci series is given by"<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl; 
    

    for(int i=1;i<=n-2;i++){  
        nextterm=n1+n2;//here n ihas been taken from global variable..........
        cout<<nextterm<<endl;

        n1=n2;
        n2=nextterm;


    }
    
    return ;  
    
} 