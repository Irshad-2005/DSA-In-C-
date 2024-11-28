/* This is a encapsulation in Oop */
#include<iostream>
using namespace std;

class User {
        private:
        int age;
        string name;
        public:
         void getAge()
         {
                cout<<this->age;
         }
};

int main()
{
        User a;
        a.getAge();
        return 0;
}
