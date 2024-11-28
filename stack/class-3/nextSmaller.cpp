#include <iostream>
#include <stack>
#include <vector>

using namespace std;
vector<int> nextSmallerElement(vector<int> &input)
{
    stack<int> st;
    st.push(-1);
    vector<int> ans(input.size());

    for (int i = input.size() - 1; i >= 0; i--)
    {
        int curr = input[i];

        while (st.top() >= curr)
        {
            st.pop();
        }

        ans[i] = st.top();

        st.push(curr);
    }

    return ans;
}
int main()
{
    vector<int> input;
    input.push_back(6);
    input.push_back(5);
    input.push_back(8);
    input.push_back(7);

    vector<int> ans = nextSmallerElement(input);

    for (auto a : ans)
    {
        cout << a << " ";
    }
    cout << endl;
}