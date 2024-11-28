#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Animal{
      public:
       virtual eat()=0;
       virtual run()=0;
       virtual sleep()=0;
};
class Dog:public Animal{
        public:
        eat()
        {
                cout<<"Dog Eating...";
        }
        run()
        {
                cout<<"Dog Ruuning fast...";
        }
        sleep()
        {
                cout<<"Dog Sleep ...";
        }
};


int main()
{
      
        Animal * animal = new Dog;

        animal->eat();
        return 0;
}