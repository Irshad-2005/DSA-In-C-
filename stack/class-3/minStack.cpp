#include <iostream>
#include <vector>
using namespace std;

class MinStack
{
public:
    vector<pair<int, int>> v;

    // push
    void push(int val)
    {
        if (v.empty())
        {
            pair<int, int> p = make_pair(val, val);
            v.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, v.back().second);
            v.push_back(p);
        }
    }
    // pop
    void pop()
    {
        v.pop_back();
    }

    // top
    int top()
    {
        pair<int, int> p = v.back();
        return p.first;
    }

    // getMin
    int getMin()
    {
        pair<int, int> p = v.back();
        return p.second;
    }
};

int main()
{
    MinStack s;
    s.push(10);
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(6);

    int top = s.top();
    cout << "Top is : " << top << endl;
    int minVal = s.getMin();
    cout << "Min is : " << minVal << endl;
    cout << endl;

    return 0;
}