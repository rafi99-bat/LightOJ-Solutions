#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <chrono>
#include <random>
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

int main()
{
    FastIO::init();
    int T;
    in(T);
    for (int caseNum = 1; caseNum <= T; ++caseNum)
    {
        int n, m;
        in(n, m);
        if (m == 1 || n == 1)
        {
            cout << "Case " << caseNum << ": " << max(n, m) << endl;
        }
        else if (n == 2 | m == 2)
        {
            cout << "Case " << caseNum << ": " << ((m * n) / 8) * 4 + (((m * n) % 8) >= 4 ? 4 : (m * n) % 8) << endl;
        }
        else
        {
            cout << "Case " << caseNum << ": " << (n * m + 1) / 2 << endl;
        }
    }
    return 0;
}