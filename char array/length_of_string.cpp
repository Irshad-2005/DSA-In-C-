#include <iostream>
using namespace std;
int lengthOfString(char name[])
{
    int count = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int main()
{
    char name[100];
    cin >> name;
    int length = lengthOfString(name);
    cout << "length of name is : " << length << endl;
    return 0;
}