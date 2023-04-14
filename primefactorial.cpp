#include<iostream>
using namespace std;

int main(){
    int n,rem,m,i;
    int count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        
        int k;
        int rem=n%i;
        
        if(rem==0)
            
            for(int k=1;k<i;k++){
                int pmr=i%k;
                if(pmr==0){
                    count++;
                }

            }
            if(count==2){
        cout<<i;
            }
    }
          
    
   
    return 0;
}

