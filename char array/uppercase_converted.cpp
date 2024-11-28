#include <iostream>
using namespace std;
void uppercaseConvert(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 'a' + 'A';
        }
        i++;
    }
}
int main()
{
    char name[100];
    cin >> name;
    uppercaseConvert(name);
    cout << name;
    return 0;
}