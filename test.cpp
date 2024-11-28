
#include <bits/stdc++.h>
using namespace std;
int main()
{

        vector<pair<int, int>> st;

        pair<int, int> p = make_pair(10, 20);

        st.push_back(p);

        pair<int, int> s = st.back()    ;

        cout << s.first << endl;
        return 0;
}
