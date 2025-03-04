// Structure :  we can add arrays , data , object in sructure 
// Structure is a user defined data type which allows us to combine data of different types together.
// Structure is a collection of variables of different data types under a single name.
// Structure is similar to an array but the only difference is that array is a collection of variables of same data type while structure is a collection of variables of different data types.
// Structure is used to represent a record.

#include <iostream>
using namespace std;

class Employee {
    private : 
        int a,b,c; // only functions can access private data Important Data Hiding
    public :
    int d , e;
    void setData(int a1 ,int b1 ,int c1); // Declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
}; // ; is important
void Employee :: setData(int a1 , int b1 , int c1){
    a = a1;
    // :: is the scope resolution operator
    b = b1;
    c = c1;
};
int main(){
    Employee ahsaan ; 
    ahsaan.d = 34;
    // ahsaan.a = 89; // This will throw error as a is private  
    ahsaan.e = 89;
    ahsaan.setData(1,2,4);
    ahsaan.getData(); // data rint kare ga ; 
    return 0;
}