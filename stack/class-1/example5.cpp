// find miidle element in a stack 
#include<iostream>
#include<stack>
using namespace std;
void findMiddleElement(stack<int>&s,int &totalSize)
{
        // base case
        if(totalSize/2+1 == s.size())
        {
                cout<<"Middle Element is : "<<s.top()<<endl;
                return;
        }
        // 1 case solve kro
        int temp = s.top();
        s.pop();
        findMiddleElement(s,totalSize);
        // backtracking
        s.push(temp);
}
int main()
{
        stack<int>s;
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        s.push(60);
        s.push(70);
        int totalSize = s.size();
        findMiddleElement(s,totalSize);
        cout<<endl;
        return 0;
}