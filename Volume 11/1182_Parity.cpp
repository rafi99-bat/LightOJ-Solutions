#include <bits/stdc++.h>

int main()
{
    int T, ca = 1;
    std::cin >> T;
    while (T--)
    {
        int n, i, j = 1, count = 0;
        std::cin >> n;
        while (n)
        {
            i = n % 2;
            if (i == 1)
                count++;
            n = n / 2;
            j = j * 10;
        }
        if (count % 2 == 0)
            std::cout << "Case " << ca++ << ": even\n";
        else
            std::cout << "Case " << ca++ << ": odd\n";
    }

    return 0;
}