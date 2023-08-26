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
        int x1, y1, x2, y2, M;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> M;
        cout << "Case " << ca++ << ":" << "\n";
        while (M--)
        {
            int x, y;
            cin >> x >> y;
            if ((x > x1 && x < x2) && (y > y1 && y < y2))
                cout << "Yes" << "\n";
            else
                cout << "No" << "\n";
        }
    }

    return 0;
}