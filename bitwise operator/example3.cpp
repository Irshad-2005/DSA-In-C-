#include<iostream>
using namespace std;
int main()
{
    // NOT Operator
   bool a = false;
   cout<<(!a)<<endl; // true 

   bool b = true;
   cout<<(!b)<<endl; // false

   cout<<(~a)<<endl; // -1
   cout<<~(a)<<endl;// -1
   cout<<(~b)<<endl; //-2
   cout<<~(b)<<endl;

   return 0;

}