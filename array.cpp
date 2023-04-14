#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];
    int sum1=0;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
            sum1=sum1+a[i][j];
        }
    }
    cout<<sum1;
    return 0;

}