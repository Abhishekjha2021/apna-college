#include<iostream>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;
    int a[n][m];
    int sum=0;

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
    }
    cout<<sum;
    return 0;

}