#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    pair<string, int> p = make_pair("a", 5);
    m.insert(p);
    m["b"] = 3;
    m["c"] = 4;
    m["d"] = 6;

    // for (auto i : m)
    // {
    //     cout << i.first << " -> " << i.second << endl;
    // }

    cout << m.size() << endl;

    cout << m.count("a") << endl;

    cout << m["e"] << endl;

    cout << m.size() << endl;

    return 0;
}