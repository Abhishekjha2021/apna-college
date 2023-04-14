#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.pop_back();
    
    //v.clear();-------------used to remove all the elements i.e-clearing the size of vector ,but capacity will be same..
    cout<<v.capacity()<<endl;  //Must include() otherwise erroe will occur..
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
    cout<<"Enter the elements of vectors"<<endl;
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    for(int i=0;i<6;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}
