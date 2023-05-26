#include<stdio.h>
int main ()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n%10;
    b=n/10;
    if(a%5==0)
    {
        c=b+(a/5);
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}