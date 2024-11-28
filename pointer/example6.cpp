#include <iostream>
using namespace std;
int main()
{
    // char ch[10] = "Irshad";
    // char *c = ch;
    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << ch[0] << endl;

    // cout << c << endl;
    // cout << &c << endl;
    // cout << *c << endl;

    char name[10] = "SherBano";
    char *cptr = &name[0];

    cout << name << endl;
    cout << &name << endl;
    cout << *(name + 3) << endl;
    cout << *(name + 4) << endl;
    cout << name + 2 << endl;

    cout << cptr << endl;
    cout << &cptr << endl;
    cout << *cptr << endl;
    cout << *(cptr + 2) << endl;
    cout << cptr + 2 << endl;

    return 0;
}