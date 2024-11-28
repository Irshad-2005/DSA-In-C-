#include<iostream>
using namespace std;

class Animal {
        private:
            int age;
            int weight;
            string type;
        public:
        void setAge(int age)
        {
                this->age = age;
                
        }
        void setWeight(int weight)
        {
                this->weight = weight ;
        }
        void setType(string type)
        {
                this->type = type;
        }
        int getAge()
        {

                return this->age;
        }
        int getWeight()
        {
                return this->weight;
        }
        string getType()
        {
                return this->type;
        }
};

int main()
{
        Animal a;
        a.setAge(10);
        a.setWeight(15);
        a.setType("cat");
        cout<<"Obejct of a "<<endl;
        cout<<"age of a -> "<< a.getAge()<<endl;
        cout<<"weight of a -> "<< a.getWeight()<<endl;
        cout<<"type of a -> "<<a.getType()<<endl;

        Animal * b = new Animal();

        b->setAge(20);
        b->setWeight(25);
        b->setType("dog");
        cout<<"Object of b "<<endl;
        cout<<"age of b -> " <<b->getAge()<<endl;
        cout<<"weight of b -> "<<b->getWeight()<<endl;
        cout<<"type of b -> "<<b->getType()<<endl;

        return 0; 
}