/* Polymorphism
   1. Compile time polymorphism
      * b. Operator overloading *

*/

#include <iostream>
using namespace std;

class A
{
public:
        int a;

        void operator+(A &obj2)
        {
                int value1 = this->a;
                int value2 = obj2.a;

                cout << value2 - value1 << endl;
        }
        void operator-(A &obj2)
        {
                int value1 = this->a;
                int value2 = obj2.a;
                cout << value2 + value1 << endl;
        }
        void operator<<(A &obj1)
        {
                cout << obj1.a << endl;
        }
};

int main()
{
        A obj1;
        A obj2;
        obj1.a = 10;
        obj2.a = 15;
        obj1 + obj2;
        obj1 - obj2;

        return 0;
}
