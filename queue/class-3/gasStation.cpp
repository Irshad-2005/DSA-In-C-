//! Gas Station
#include <iostream>
#include <vector>
using namespace std;
int gasStation(vector<int> &gas, vector<int> &cost)
{
    // kitna petrol kaam ho gya
    int dificit = 0;
    // kita petrol baccha h
    int balance = 0;
    // circuit kaha se start karna h
    int start = 0;

    for (int i = 0; i < gas.size(); i++)
    {
        balance += gas[i] - cost[i];
        if (balance < 0)
        {
            //! yaha pe galti ho sakta h
            dificit += balance;
            start = i + 1;
            balance = 0;
        }
    }
    if (balance + dificit >= 0)
    {
        cout << balance << " " << dificit << " ";
        return start;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int ans = gasStation(gas, cost);

    cout << "ans is : " << ans << endl;
    return 0;
}