#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    // string name;
    getline(cin, str);
    // getline(cin, name);
    // cout << "Size of string : " << str.size() << endl;
    // cout << "length of string : " << str.length() << endl;
    // cout << "Is Empty : " << str.empty() << endl;
    // cout << "sub string : " << str.substr(0, 6);
    // cout << str.compare(name);
    // str.push_back('x');
    // cout << str << endl;
    // str.pop_back();
    // cout << str << endl;

    cout << str.find("d") << endl;

    return 0;
}
