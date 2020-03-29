#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v)
{
    int t;
    if(u < v)
    {
        t = u;
        u = v;
        v = t;
    }
    while(u % v != 0)
    {
        printf("!");
        t = v;
        v = u % v;
        u = t;
    }
    return v;
}

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF)
    {
        if(x > 0 && y > 0)
        {
            printf("%d %d %d", x, y, gcd(x, y));
        }
    }
}
