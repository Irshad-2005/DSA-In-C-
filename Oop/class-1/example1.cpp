#include<iostream>
using namespace std;
class Animal {

       public:
        int age;
        int weight;
        string type;
   
};

int main()
{
        
        Animal a;
        a.age=10;
        a.weight =15;
        a.type="cat";
        cout<<"age of a -> "<<a.age<<endl;
        cout<<"weight of a -> "<<a.weight<<endl;
        cout<<"type of a -> " <<a.type<<endl;
        Animal *b = new Animal;
        b->age = 20;
        cout<<"age of b -> "<<b->age<<endl;
        return 0;
}
