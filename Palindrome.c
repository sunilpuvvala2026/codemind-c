
#include<stdio.h>
int main()
{
    int n,r,a,s=0;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        s=s*10+r;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}