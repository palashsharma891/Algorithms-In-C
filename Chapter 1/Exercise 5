#include <stdio.h>
#include <stdlib.h>

void binary(int num)  // void because the function should print and not return according to the question
{
    int r, i = 0, j;
    int bi[10] = {};
    while(num != 0)
    {
        r = num % 2;
        bi[i] = r;
        num = num / 2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d", bi[j]);
    }
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    binary(n);
}
