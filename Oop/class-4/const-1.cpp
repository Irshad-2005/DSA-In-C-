#include <iostream>

using namespace std;

class Abc
{
private:
        int x;
        int *y;

public:
        Abc()
        {
                // this->x =0;
                this->y = new int(0);
        }
        void setX(int _val)
        {
                this->x = _val;
        }
        int getX() const
        {
                // this->x = 50; // can not change this value becuase this function is const function

                return this->x;
        }
        int getY() const
        {
                return *y;
        }
        void setY(int _val)
        {
                *y = _val;
        }
};

void print(const Abc &a)
{
        cout << a.getX() << " " << a.getY() << " " << endl;
}

int main()
{

        // Abc a;
        //  a.setX(10);
        // cout<<a.getX()<<endl;

        //  a.setY(20);
        // cout<<a.getY()<<endl;

        // print(a);

        // const with pointer (data is const and pointer is Non-const )

        //  int const *ptr = new int(10);
        // *ptr = 100; (can not be change value )
        //  int b = 20;
        //  ptr = &b;
        //  cout<<*ptr<<endl;

        //  int *const p =  new int(10); //(pointer will be const and data is Non-const )
        // int b = 20;
        //     p = &b; (can not be change pinter )
        // *p = 100;
        // cout<<*p<<endl;
        // cout<<b<<endl;
         const int *const q = new int(10);
         int b = 20;
         // *q = 100; (cant not change value)

         // q = &b; (can not change also pointer)
 
         cout<<b<<endl;
         cout<<*q<<endl;
        return 0;
}