#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v)
{
    int t;
    if(u == 0 || v == 0)
        return 0;
    if(u < v)
    {
        t = u;
        u = v;
        v = t;
    }
    while(u % v != 0)
    {
        t = v;
        v = u % v;
        u = t;
    }
    return v;
}

int main()
{
    int r, c, i, j;
    printf("Enter the number of rows and columns : ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(gcd(i, j) == 1)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    printf("The asked 2d array is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
