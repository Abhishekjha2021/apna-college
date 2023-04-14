#include<stdio.h>
//void toh(int n,char src,char dest,char help);

void toh(int n,char src,char dest,char help){
    if(n==0){
        return;
    }
    toh(n-1,src,help,dest);
    printf("Move from %c to %c\n",src,dest);
    toh(n-1,help,dest,src);
}
int main(){
    toh(3,'A','C','B');
    return 0;
}