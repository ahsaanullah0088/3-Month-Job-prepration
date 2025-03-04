#include<iostream>
using namespace std;

class Employee{
    int id;
    int count;
    public:
    void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
        cout<<id<<endl;
    }
};
int main(){
    Employee ahsaan;
    ahsaan.setData();
    ahsaan.getData();
    return 0;
}