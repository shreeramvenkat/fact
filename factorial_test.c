#include<stdio.h>
int main()
{
    int i;int n;
    int f=1;
    printf("enter the no for factorial:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("\n the %d! is = %d ",n,f);
    return 0;
}
