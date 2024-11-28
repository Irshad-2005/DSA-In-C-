#include<iostream>
using namespace std;
int main()
{ 
    // OR Operator
    int a = true;
    int b = false;
    cout<<(a|b)<<endl; // true

    int c = false;
    int d= true;
    cout<<(c|d)<<endl;// true

    int i = false;
    int j = false;
    cout<<(i|j)<<endl;// false

    int x = true;
    int y = true;
    cout<<(x|y)<<endl; // true  

    return 0;
}