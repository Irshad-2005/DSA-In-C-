#include<iostream>
#include"bird.h"
using namespace std;
void printObj(Bird & bird)
{
        bird.eat();
        bird.fly();
}
int main()
{
         Bird *bird = new Sparrow();

        printObj(*bird);

        return 0; 
}