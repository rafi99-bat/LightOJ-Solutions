#include<stdio.h>

int main()
{
    long long n, cases;
    scanf("%lld", &cases);
    if(cases<=100)
    {
        for(int i=1; i<=cases; i++)
        {
            long long num[10009];
            scanf("%lld %lld %lld %lld %lld %lld %lld", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &n);
            if(n<=10000)
            {
                int j;
                for(j=6; j<=n; j++)
                {
                    num[j] = (num[j-1] + num[j-2] + num[j-3] + num[j-4] + num[j-5] + num[j-6]) % 10000007;
                }
                printf("Case %d: %lld\n", i, num[n]%10000007);
            }
        }
    }
    return 0;
}