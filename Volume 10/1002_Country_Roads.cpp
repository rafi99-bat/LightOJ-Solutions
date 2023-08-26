#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, i = 1;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<pair<int, int>>> adj(n);
        while (m--)
        {
            int a, b, c;
            cin >> a >> b >> c;
            adj[a].push_back({b, c});
            adj[b].push_back({a, c});
        }

        int t;
        cin >> t;
        vector<int> d(n, INF);
        d[t] = 0;
        priority_queue<pair<int, int>> pq;
        pq.push({0, t});
        while (!pq.empty())
        {
            int u = pq.top().second;
            int du = -pq.top().first;
            pq.pop();
            if (du != d[u])
                continue;
            for (auto [v, w] : adj[u])
            {
                if (d[v] > max(d[u], w))
                {
                    d[v] = max(d[u], w);
                    pq.push({-d[v], v});
                }
            }
        }
        cout << "Case " << i++ << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (d[i] == INF)
                cout << "Impossible\n";
            else
                cout << d[i] << "\n";
        }
    }
}