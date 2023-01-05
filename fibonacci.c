
#include<stdio.h>
int main()
{
    int n,a,b,i,s;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d ",a,b);
    for(i=1;i<(n-1);i++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
    }
}