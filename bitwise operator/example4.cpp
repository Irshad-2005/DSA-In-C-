#include<iostream>
using namespace std;
int main() 
{
     int a = false;
     int b = true;
     cout<<(a^b)<<endl; // true

     int c = true;
     int d = false;
     cout<<(c^d)<<endl; // true

    int i = true;
    int j = true;
    cout<<(i^j)<<endl; // false

    int x = false;
    int y = false;
    cout<<(x^y)<<endl; // false
     return 0;
}