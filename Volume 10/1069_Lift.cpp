#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, i = 1;
    cin >> T;
    while (T--)
    {
        int mp, lp;
        cin >> mp >> lp;
        cout << "Case " << i++ << ": " << (abs(mp - lp) * 4 + mp * 4 + 19) << '\n';
    }
}