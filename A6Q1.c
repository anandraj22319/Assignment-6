#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+i;
    }
    printf("sum is %d",a);
    return 0;
}
