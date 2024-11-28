/* this is a inheritance 
  
*/

#include<iostream>
using namespace std;

class Animal {
        public:
          int age;
          int weight;
          string type;
          
};

class Dog:public Animal{
        public:
           void print()
           {
                cout<<this->age<<endl;
           }
        
};

int main()
{
        Dog d1;
      d1.print();
        return 0;
}