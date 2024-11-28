#include<iostream>

using namespace std;

class Animal {
        public:
          int age;
          int weight;
          string type;

          void speak()
          {
                cout<<"speaking ...."<<endl;
          }
};


class Dog:public Animal{
        public:
          void speak()
          {
                cout<<"Barking...."<<endl;
          }
};


int main()
{
        
        Animal * a= new Dog();
        a->speak();
       
        Animal *a1 = new Animal();
        a1->speak();
        Dog *d1  = new Dog();
        d1->speak();


       
        return 0;
}