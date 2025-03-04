/// Member Functions of class OopsRecap
// \param[in] none
// \return none
#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
};
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
};
void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();
}

    // c++  initially called as c with classes by stroustroup
    // classes are the blueprints of objects
    // structures have limitattions like they cannot have functions
    // structures have public members by default
    // classes = sturctios + more
    /// classes have mehod and properties(vales)
    // classes can make few member as private or public
    // struction in c++ are tyepdef
    // yuou can declare object alosg wht declation of class
    // harry.salary = 34 makes no sense if salary is private
    // harry.getSalary() is a better way and is used to access private data

    // Nesting of member funtions
    // Member functions can be called within other member functionsl