#include <iostream>
using namespace std;

class Animal
{
private:
    int age;
    int weight;
    string type;

public:
    int getAge()
    {
        return this->age;
    }
    void eat()
    {
        cout << "Eating ...." << endl;
    }
    void sleep()
    {
        cout << "Sleeping ..." << endl;
    }
    Animal()
    {
        cout << "Constructor called default..." << endl;
    }
    Animal(int age)
    {
        this->age = age;
        cout << "Constructor called parameterized 1 ...." << endl;
    }
    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Constructor called parameterized 2 ...." << endl;
    }
    Animal(int age, int weight, string type)
    {
        this->age = age;
        this->weight = weight;
        this->type = type;
        cout << "Constructor called parameterized 3 ....." << endl;
    }
    Animal(Animal &b)
    {
        this->age = b.age;
        this->weight = b.weight;
        this->type = b.type;
        cout << "Copy constructor called ..." << endl;
    }
    ~Animal()
    {
        cout << "Destructor called ..." << endl;
    }
};

int main()
{
    Animal a(10, 15, "cat");
    Animal *b = new Animal(12, 17, "dog");
    Animal *c = new Animal(*b);
    c->eat();

    delete b;
    delete c;

    return 0;
}