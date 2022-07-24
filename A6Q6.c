#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("Factorial is %d",f);
    return 0;
}
