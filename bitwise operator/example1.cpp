#include<iostream>
using namespace std;
  int main()
{
    // AND Operator
    bool a = true;
    bool b = false ;
    cout<<(a&b)<<endl;// false 

    bool c = true;
    bool d = true;
    cout<<(c&d)<<endl; // true

    bool e = false;
    bool f = false;
    cout<<(e&f)<<endl;// false 

    bool x = false;
    bool y = true;
    cout<<(x&y)<<endl; // false 

    cout<<(2 & 5)<<endl;
    return 0;
}