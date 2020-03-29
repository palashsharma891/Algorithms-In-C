#include <stdio.h>
#include <stdlib.h>

struct Fraction
{
    int numerator;
    int denominator;
};

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
    struct Fraction frac;
    char ch = 'y';
    int num, den, div,n;
    while(ch == 'y' || ch == 'Y')//ch != 'n' || ch != 'N' not working?!?!?!?!??!/
    {
        printf("Enter the numerator and denominator of a given fraction : ");
        scanf("%d", &frac.numerator);
        scanf("%d", &frac.denominator);
        num = frac.numerator;
        den = frac.denominator;
        div = gcd(num, den);
        printf("The fraction in lowest terms will be : %d/%d\n", num/div, den/div);
        printf("Would you like to continue?\nPress 'y'/'Y' to continue and 'n'/'N' to exit : ");
        scanf(" %c", &ch);
    }
}
