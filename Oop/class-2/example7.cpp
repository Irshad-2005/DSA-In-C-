/* Polymorphism 
  1. compile time polymorphism 
     * a. function overloading *

*/
#include<iostream>
using namespace  std;

class A
{
        public:
         int sum(int a,int b)
         {
                return a+b;
         }
         int sum (int a , int b ,int c)
         {
                return a+b+c;
         }
         float sum(int a,float b)
         {
                return a+b;
         }
};

int main()
{
        A obj;
        cout<<obj.sum(10,5.5f)<<endl;
        return 0;
}