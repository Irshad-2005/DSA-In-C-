#include<iostream>
using namespace std;

class Abc{
        const int a;
          int b;
        public:
        
        Abc(int _val1, int _val2):a(_val1),b(_val2) // (this is a initializer list)
        {

        }
        int getA() const 
        {
                return this->a;
        }
        int getB() const
        {
                return this->b;
        }
        void setB(int _val)
        {
                this->b = _val;
        }
}; 
        
void print(const Abc&a)
{
        cout<<a.getA()<<" "<<a.getB()<<endl;
}
int main()
{
        Abc a(10,20);
        a.setB(200);
        print(a);
        
        return 0;
}

