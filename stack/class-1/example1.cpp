#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;
    st.push(50);
    st.push(60);
    st.push(70);
    st.push(80);
    cout << st.size() << endl;
     cout<<st.top()<<endl;
     st.pop();
     cout<<st.top()<<endl;
     st.pop();
     cout<<st.top()<<endl;
     st.pop();
     cout<<st.top()<<endl;
     st.pop();
     
    return 0;
}