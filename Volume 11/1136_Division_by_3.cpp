#include <bits/stdc++.h>
using namespace std;

long long numbers_divisible_by_3(int n)
{
    if (n == 0)
        return 0;
    int subs;
    if (n % 3 == 0)
        subs = n / 3;
    else
        subs = (n / 3) + 1;
    return n - subs;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, ca = 1;
    cin >> T;
    while (T--)
    {
        int i, A, B;
        cin >> A >> B;
        long long n = numbers_divisible_by_3(B) - numbers_divisible_by_3(A - 1);
        cout << "Case " << ca++ << ": " << n << "\n";
    }
    return 0;
}