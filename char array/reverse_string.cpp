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
void reverseString(char name[])
{
    int i = 0;
    int j = lengthOfString(name) - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main()
{
    char name[100];
    cin >> name;
    cout << "Before reverse string " << name << endl;
    reverseString(name);
    cout << "After reverse string " << name << endl;
    return 0;
}