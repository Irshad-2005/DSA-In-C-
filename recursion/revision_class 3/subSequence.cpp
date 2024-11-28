#include <iostream>
#include <vector>
using namespace std;
void subSequence(string &str, int i, int n, string output, vector<string> &v)
{
    // base case
    if (i >= n)
    {
        // cout << output << endl;
        v.push_back(output);
        return;
    }

    // // include
    // subSequence(str, i + 1, n, output + str[i]);
    // // exclude
    // subSequence(str, i + 1, n, output);

    // exclude
    subSequence(str, i + 1, n, output, v);

    // include
    output.push_back(str[i]);
    subSequence(str, i + 1, n, output, v);
}
int main()
{
    string str = "abc";
    int n = str.length();
    int i = 0;
    string output = "";
    vector<string> v;

    subSequence(str, i, n, output, v);

    cout << " printing all sub sequence : " << endl;
    for (auto val : v)
    {
        cout << val << endl;
    }

    cout << "length of v : " << v.size();
    return 0;
}