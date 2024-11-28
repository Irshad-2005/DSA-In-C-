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
void replaceAllSpace(char name[])
{
    int n = lengthOfString(name);
    for (int i = 0; i < n; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}
int main()
{
    char name[100];
    cin.getline(name, 100);
    replaceAllSpace(name);
    cout << name << endl;
    return 0;
}