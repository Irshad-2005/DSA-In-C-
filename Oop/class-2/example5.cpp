/* 3. Multiple inheritance*/

#include <iostream>
using namespace std;

class A
{
public:
        int physics;
        A()
        {
                cout<<"constructor called A class"<<endl;
        }
};
class B
{
public:
        int chemistry;
        B()
        {
                cout<<"constructor called B class"<<endl;
        }
};

class C :  public A,public B
{
public:
        int maths;
        C()
        {
                cout<<"constructor called C class"<<endl;
        }
};

int main()
{
        C obj;
        cout << obj.physics << endl
             << obj.chemistry << endl
             << obj.maths << endl;
        return 0;
}
