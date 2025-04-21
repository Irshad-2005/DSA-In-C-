#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> m;

    pair<string, int> p = make_pair("BMW", 9);
    m.insert(p);

    m["AUDI"] = 8;

    m["BUCKATI"] = 10;

    // cout << "BMW -> " << m.at("BMW") << endl;
    // cout << "AUDI -> " << m.at("AUDI") << endl;
    // cout << "BUCKATI -> " << m.at("BUCKATI") << endl;

    if (m.empty())
    {
        cout << "map is empty" << endl;
    }
    else
    {
        cout << "map is not empty" << endl;
    }

    cout << "size is : " << m.size() << endl;

    cout << m.count("BMW") << endl;

    if (m.find("BMW") != m.end())
    {
        cout << m.at("BMW") << endl;
    }
    return 0;
}