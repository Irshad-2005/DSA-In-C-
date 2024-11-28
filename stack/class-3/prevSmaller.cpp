#include <iostream>
#include <stack>
#include <vector>
using namespace std;
vector<int> prevSmallerElement(vector<int> &input)
{
    stack<int> st;
    st.push(-1);

    vector<int> ans(input.size());

    for (int i = 0; i < input.size(); i++)
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
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);

    vector<int> ans = prevSmallerElement(input);

    for (auto a : ans)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;
}