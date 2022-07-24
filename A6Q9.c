#include<stdio.h>
int main()
{
    int x,y,l;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    for(l=x>y?x:y;l<=x*y;l++)
    if(l%x==0&&l%y==0)
        break;
    printf("LCM is %d",l);
}
