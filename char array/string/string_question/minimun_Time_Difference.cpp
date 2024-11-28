#include <bits/stdc++.h>
using namespace std;
int findMinimumTime(vector<string> timePonits)
{
    /// convert to hour to minutes or string to integer
    vector<int> minutes;
    for (int i = 0; i < timePonits.size(); i++)
    {
        string curr = timePonits[i];
        int hours = stoi(curr.substr(0, 2));
        int minute = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + minute;
        minutes.push_back(totalMinutes);
    }
    // sort
    sort(minutes.begin(), minutes.end());
    // difference
    int mini = INT_MAX;
    int n = minutes.size();
    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }
    /// differemce to first index and last index
    // 24 hour -> 1440 minutes
    int lastDiff = minutes[0] + 1440 - minutes[n - 1];
    mini = min(mini, lastDiff);
    return mini;
}
int main()
{
    vector<string> timePoints = {"23:59", "00:00"};
    int ans = findMinimumTime(timePoints);
    cout << ans;
    return 0;
}
