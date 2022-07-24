#include<stdio.h>
int main()
{
    int count=0,x;
    printf("Enter a number ");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("Total digit is %d",count);
    return 0;

}
