#include <iostream>
using namespace std;
void lowecaseConvert(char name[])
{
    int i = 0;
    while (name[i] != '\0')
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] - 'A' + 'a';
        }
        i++;
    }
}
int main()
{
    char name[100];
    cin >> name;
    lowecaseConvert(name);
    cout << name << endl;
    return 0;
}