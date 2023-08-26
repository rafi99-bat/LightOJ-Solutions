#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

#define endl "\n"
#define PI 3.141592653589793238462
#define INF_INT 2e9
#define INF_LL 2e18
#define fo(a, b) for (auto i = a; i < b; ++i)
#define nfo(a, b) for (auto i = a; i >= b; --i)
#define jfo(a, b) for (auto j = a; j < b; ++j)
#define njfo(a, b) for (auto j = a; j >= b; --j)

typedef long long int ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<char> vc;
typedef set<int> si;
typedef set<char> scr;
typedef set<string> sst;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef unordered_map<string, int> umsi;
typedef unordered_map<string, vector<string>> umsvs;
typedef pair<int, int> pii;
typedef pair<int, pii> pip;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plp;

const int mod = 1000000007;
const int N = 3e5, M = N;

namespace FastIO { void init() { ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); } }

namespace Random { mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); int randInt(int l, int r) { uniform_int_distribution<int> dist(l, r); return dist(rng); } }

template <typename Key, typename Value>
using PBDS_Tree = tree<pair<Key, Value>, null_type, less<pair<Key, Value>>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
inline void print(const T &value) { cout << value; }
template <typename T>
inline void println(const T &value) { cout << value << "\n"; }
template <typename T>
inline void printSpace(const T &value) { cout << value << " "; }
template <typename... Args>
void printValues(const Args &...args) { initializer_list<int>{(print(args), printSpace(" "), 0)...}; }

template <typename T>
void in(T &value) { cin >> value; }
template <typename T, typename... Args>
void in(T &value, Args &...args) { cin >> value; in(args...); }
void in(string& str) { getline(cin, str); }

template <typename T>
void _debug(T a)
{
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << a;
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << "]" << endl;
}

template <typename T, typename... Args>
void _debug(T a, Args... b)
{
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << a;
    if (typeid(a) == typeid(char))
        cout << '\'';
    if (typeid(a) == typeid(string))
        cout << '\"';
    cout << ",\t";
    _debug(b...);
}

template <typename... Args>
void debug(Args... b)
{
    cout << '[';
    _debug(b...);
}

void swap(ll &x, ll &y)
{
    ll temp = y;
    y = x;
    x = temp;
}

string decToBin(int num)
{
    if (num == 0)
        return "0";

    string bin;
    while (num > 0)
    {
        bin = to_string(num % 2) + bin;
        num /= 2;
    }
    return bin;
}

ll powa(ll base, ll exp, ll mod)
{
    ll result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

bool dfs(string node, unordered_map<string, vector<string>>& graph, unordered_map<string, bool>& visited, unordered_map<string, bool>& recursionStack) {
    visited[node] = true;
    recursionStack[node] = true;

    for (const string& neighbor : graph[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, graph, visited, recursionStack)) {
                return true;
            }
        } else if (recursionStack[neighbor]) {
            return true;
        }
    }

    recursionStack[node] = false;
    return false;
}

bool hasCycle(unordered_map<string, vector<string>>& graph) {
    unordered_map<string, bool> visited;
    unordered_map<string, bool> recursionStack;

    for (const auto& entry : graph) {
        const string& node = entry.first;
        visited[node] = false;
        recursionStack[node] = false;
    }

    for (const auto& entry : graph) {
        const string& node = entry.first;
        if (!visited[node]) {
            if (dfs(node, graph, visited, recursionStack)) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    FastIO::init();
    int T, i = 1;
    in(T);
    while (T--)
    {
        int m;
        in(m);
        cin.ignore();
        umsvs mp;
        while (m--)
        {
            string a, b;
            in(a, b);
            mp[a].push_back(b);
        }
        if (hasCycle(mp))
        {
            cout << "Case " << i << ": No" << endl;
        }
        else
        {
            cout << "Case " << i << ": Yes" << endl;
        }
        ++i;
    }
    return 0;
}