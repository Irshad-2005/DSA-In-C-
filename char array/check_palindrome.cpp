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
bool checkPalindrome(char name[])
{
    int i = 0;
    int j = lengthOfString(name) - 1;
    while (i <= j)
    {
        if (name[i] != name[j])
        {
            return false;
        }
        i++;
        j--;
        return true;
    }
}
int main()
{
    char name[100];
    cin >> name;
    cout << checkPalindrome(name);
    return 0;
}
