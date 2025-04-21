#include <iostream>
using namespace std;
#include <unordered_map>
int main()
{
    unordered_map<char, int> m;
    string str = "thiruvananthapuram";

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        m[ch]++;
    }

    for (auto i : m)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    return 0;
}