#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int x, int y)
{
    int t;
    if(x < y)
    {
        t = x;
        x = y;
        y = t;
    }
    while(x % y != 0)
    {
        t = y;
        y = x % y;
        y = t;
    }
    return y;
}

int main()
{
    int a, b, c, gcd1, gcd_final;
    printf("Enter three numbers :  ");
    scanf("%d %d %d", &a, &b, &c);
    gcd1 = gcd(a, b);
    gcd_final = gcd(gcd1, c);
    printf("The gcd of given 3 numbers is : %d", gcd_final);
}
