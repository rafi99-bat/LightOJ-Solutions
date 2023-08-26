#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
const int N = 3e5, M = N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<double> log_factorials(1000001);
    log_factorials[0] = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        log_factorials[i] = log_factorials[i - 1] + log(i);
    }

    int T, i = 1;
    cin >> T;
    while (T--)
    {
        ll n;
        int base;
        cin >> n >> base;

        ll digits = static_cast<ll>(log_factorials[n] / log(base)) + 1;

        cout << "Case " << i++ << ": " << digits << "\n";
    }
}