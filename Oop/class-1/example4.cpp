#include <iostream>
using namespace std;

class Student
{
private:
        int rollNo;
        string 

public:
        string name;

        void setAge(int age)
        {
                this->age = age;
        }

        int getAge()
        {
                return this->age;
        }

        void setSalary(int salary)
        {
                this->salary = salary;
        }

        int getSalary()
        {
                return this->salary;
        }
};

int main()
{
        Person *P1 = new Person();
        P1->name = "Vaibhav";
        cout << "Name is : " << P1->name << endl;
        P1->setAge(20);
        cout << "Age is : " << P1->getAge() << endl;
        P1->setSalary(20000);
        cout << "Salary is : " << P1->getSalary() << endl;

        return 0;
}