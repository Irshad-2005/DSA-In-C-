#include <iostream>
using namespace std;
bool findKey(string &str, int i, char key)
{
    // base case
    if (i >= str.length())
        return false;

    if (str[i] == key)
        return true;
    // Recursive Relation

    findKey(str, i + 1, key);
}
using namespace std;
int main()
{
    string str = "programming";
    char key = 'r';
    int i = 0;
    bool ans = findKey(str, i, key);
    cout << "Answer is : " << ans << endl;
    return 0;
}