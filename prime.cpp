/*#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number\n";
    cin>>n;

    for(i=2;i<=n;i++){
        if(n%i==0){
            cout<<"no isn't prime\n";
            break;
        }
        else{
            cout<<"no is  prime";
        }

        
    }

    
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int n,i,rem,count=0;
    cout<<"Enter a number\n";
    cin>>n;

    for(i=2;i<=n;i++){
        rem = n%i;
        if(rem==0){
            count++;
        }
    }
        if(count==1){
            cout<< n <<"is prime number";
        }
        else{
            cout<< n <<"is not a prime number";
        }
        
    

    
    return 0;
}