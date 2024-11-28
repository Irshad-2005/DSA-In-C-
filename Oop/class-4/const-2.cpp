#include <iostream>

using namespace std;

class Abc
{
private:
        int x ;
        int *y;
        int z;

public:
        Abc(int _x, int _y,int _z = 0 )
        {
                this->x = _x;
                this->y = new int(_y);
                this->z = _z;
        }
        int getX() const
        {
                // this->x=100; (use mutable keyword and change this private member just a debuging)
                return this->x;
        }
        void setX(int _val)
        {
                this->x = _val;
        }
        int getY() const
        {
                return *y;
        }
        void setY(int _val)
        {
                *y = _val;
        }
        int getZ() const
        {
                return this->z;
        }
};

void print(const Abc&a)
{
        cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}
int main()
{

        Abc * a = new Abc(10,20,30);
        print(*a);

        return 0;
}