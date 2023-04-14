#include<iostream>
#include<vector>
using namespace std;
void func(vector<int>&v);   //cause of error was to take fuction as int , so take as void.......
void display(vector<int>&v);
int getindexofelement(vector<int>&v,int i);
int main(){
   vector<int>v={90,80,70,60,50};
  

   cout<<"Vector is"<<endl;
    display(v);

   func(v);
   

   display(v);

    return 0; 
}

 void func(vector<int>&v){
    for(int i=0;i<v.size()-1;i++){
        int j=getindexofelement(v,i);
    }

    //cout<<"xyz: ";
   
}

int getindexofelement(vector<int>&v,int i){
    //int min_index=i;
    for(int j=i+1;j<v.size();j++){
        if(v[j]<v[i]){
            swap(v[j],v[i]);
            //min_index=i;
        }
        
    }
}
void display(vector<int>&v){

 for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}