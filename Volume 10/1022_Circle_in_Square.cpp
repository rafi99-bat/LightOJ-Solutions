#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    const double pi = 2.0 * acos(0.0);
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        double r;
        scanf("%lf", &r);
        printf("Case %d: %.2lf\n", i, r * r * (4 - pi));
    }
    return 0;
}