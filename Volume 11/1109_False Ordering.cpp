#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<pair<int, int>> v(1001);
    for (int i = 1; i <= 1000; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                cnt++;
        }
        v[i].first = cnt;
        v[i].second = i;
    }
    sort(v.begin(), v.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
            if (a.first != b.first)
            {
                return a.first < b.first;
            }
            return a.second > b.second; });
    int t, ca = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Case " << ca++ << ": " << v[n].second << "\n";
    }
}