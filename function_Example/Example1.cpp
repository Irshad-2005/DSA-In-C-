#include<iostream>
using namespace std;
void  printB(int b) 
{
    ++b;
    b++;
    cout<<b<<endl; //12
}
void  printA(int a)
{
    int b = 10;
    a++; 
    ++a;
    printB(b);
    cout<<a<<endl;//7

}
int main()
{
    int a = 5;
    printA(a);
    a++;
    cout<<a;// 6

    return 0;

}


