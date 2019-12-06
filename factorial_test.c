#include<stdio.h>
int main()
{
    int i;int num;
    int fact=1;
    printf("enter the no for factorial:");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }
    printf("\n the %d! is = %d ",num,fact);
    return 0;
}
