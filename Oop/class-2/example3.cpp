/* 1. Single level inheritance */

#include<iostream>
using namespace  std;

class Animal {
        public:
        int age;
        int weight;
        string type;
        Animal()
        {
                this->age=0;
                this->weight=0;
                this->type="";
                cout<<"constructor called Animal ..."<<endl;
        }
        void eat()
        {
                
                cout<<"Eating ..."<<endl;
        }
};

class Dog:public Animal{
        public:
        Dog()
        {
                cout<<"constructor called Dog..."<<endl;
        }

};

int main()
{
        Dog d1;
        cout<<d1.age<<endl;
        d1.eat();
        return 0;
}