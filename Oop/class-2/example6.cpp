/* multiple inheritance (scpre resolution)
 *  diamond problem *
 */

#include <iostream>
using namespace std;

class A
{
public:
        int chemistry;
};

class B
{
public:
        int chemistry;
};

class C : public A, public B
{
public:
        int math;
};

int main()
{
        C obj;

        cout << obj.A::chemistry << endl
             << obj.B::chemistry << endl
             << obj.math << endl;
        return 0;
}