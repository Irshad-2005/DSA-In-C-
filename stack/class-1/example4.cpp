// string reverse using stack
#include<iostream>
#include<stack>
using namespace std;

int main()
{
        stack <char>str;
        str.push('L');
        str.push('O');
        str.push('V');
        str.push('E');

        while(!str.empty())
        {
                cout<<str.top()<< " ";
                str.pop();
        }

        return 0;
}

