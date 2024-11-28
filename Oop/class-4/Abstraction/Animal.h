#include<iostream>
using namespace std;
#if !defined(Animal_H)

 #define Animal_H

class Animal  {
       public:
         virtual void eat() = 0;
         virtual void run() = 0;
};

class Dog:public Animal{
        public:
        void eat() 
        {
                cout<<"Dog Earing..."<<endl;
        }
        void run() 
        {
                cout<<"Dog Running..."<<endl;
        }
};
class Cat:public Animal{
        public:
         void eat()
         {
                cout<<"Cat Eating.."<<endl;
         }
         void run()
         {
                cout<<"Cat Running Slow..."<<endl;
         }
};

#endif // Animal_H