#include<iostream>
using namespace std;
void ans();
class krsna{
    public:
    int age;
    string gender;
    void ans(){
            cout<<age<<endl<<gender;
    }
};

int main(){

    krsna val;
    val.age=40;
    val.gender="male";
    val.ans();
    return 0;

}