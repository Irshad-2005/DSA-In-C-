#include<iostream>
using namespace std;
#include"Animal.h"
void print( Animal &A)
{
        A.eat();
        A.run();
}
int main()
{
    Animal *A = new Dog();
    Animal *C = new Cat();
    print(*A);
    print(*C);
    return 0;
}