#include <iostream>
using namespace std;
int main()
{
    // char ch[100];
    // cin >> ch;
    // cout << ch << endl;
    // int i = 0;
    // while (ch[i] != '\0')
    // {
    //     cout << " ch = " << i << " " << ch[i] << endl;
    //     i++;
    // }

    // char name[4];
    // cin >> name;
    // // cout << name << endl;
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     cout << " ch = " << i << " " << name[i] << endl;
    //     i++;
    // }

    char name[100];
    cin.getline(name, 100);
    cout << name;
    return 0;
}