#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, ca = 1;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            cout << "Case " << ca++ << ": yes" << "\n";
        else
            cout << "Case " << ca++ << ": no" << "\n";
    }

    return 0;
}