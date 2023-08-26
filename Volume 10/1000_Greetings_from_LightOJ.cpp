#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, i = 1;
    scanf("%d", &T);
    while (T--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", i, a+b);
        i++;
    }
    return 0;
}