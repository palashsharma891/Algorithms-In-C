#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,x,i,first,last,middle;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number to be searched\n");
    scanf("%d",&num);
    first=0;
    last=n-1;
    middle=(first + last)/2;
    while(first<=last)
    {
        if(a[middle]<num)
        {
            first = middle + 1;
        }
        else if(a[middle] == num)
        {
            printf("%d is present at position %d\n",num,middle+1);
            break;
        }
        else
        {
            last = middle-1;
        }
        middle = (first + last)/2;
    }
    if(first>last)
    {
        printf("%d is not present in the list");
    }
    return 0;
}
