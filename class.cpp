#include<iostream>
using namespace std;

class student{
    public:
    string name;     //Attributes..
    int age;         //Attributes..
    bool gender;     //Attributes..

    void printinfo(){
        cout<<"name= ";
        cout<<name<<endl;  //value of name will be given here from main function..
        cout<<"age= ";
        cout<<age<<endl;
        cout<<"gender= ";
        cout<<gender<<endl;
    }

}; //don't forget to use this comma ; at last.

int main(){

    student arr[3];//declaring object name ;
    for(int i=0;i<3;i++){
        cout<<"name= ";   // here this name means to know us to give inpit value
        cin>>arr[i].name; //this value is stored to attribute name
        cout<<"age= ";
        cin>>arr[i].age;  //this value is stored to attribute age 
        cout<<"gender= ";
        cin>>arr[i].gender;//this value is stored to attribute gender..
    }
    for(int i=0;i<3;i++){
        arr[i].printinfo();
    }
    return 0;
}