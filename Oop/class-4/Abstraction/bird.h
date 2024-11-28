#include<iostream>
using namespace std;
#if !defined(Bird_H)
# define Bird_H

class Bird{
        public:
          virtual void eat() = 0;
          virtual void fly () = 0;
};

class Sparrow : public Bird{
        public:
         void eat()
         {
                cout<<"Sparrow Eating..."<<endl;
         }
         void fly()
         {
                cout<<"Sparrow Flying..."<<endl;
         }
};

class Eagle : public Bird{
           public:
            void eat()
            {
                cout<<"Eagle Eating..."<<endl;
            }
            void fly()
            {
                cout<<"Eagle Flying faster ...."<<endl;
            }
};

#endif