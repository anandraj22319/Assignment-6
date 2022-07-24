#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=2;i<=2*n;i+=2)
    {
            s=s+i;

    }
    printf("Sum is %d",s);
    return 0;
}
