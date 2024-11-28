#include<iostream>
using namespace std;

class Animal {
        public:
          int age;
          int weight;
          string type;
        void speak()
        {
                cout<<"Speaking "<<endl;
        }
};

class Dog : public Animal
 {
        public:
         string color;
         void speak()
         {
                cout<<"Barking..."<<endl;
         }
         
 };



int main()
{
        Animal a;
        cout<<a.age<<endl;
        a.speak();

        Dog d;
        cout<<d.age<<endl;
           d.speak();
        return 0;
}