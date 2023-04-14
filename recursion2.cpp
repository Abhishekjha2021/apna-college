//Recursion code to print numbers in decreasing order..
#include<iostream>
using namespace std;
void func(int n);
int main(){
    func(5);
    return 0;
}

void func(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<" ";
    func(n-1);
}
