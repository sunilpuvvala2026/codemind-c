#include<stdio.h>
int main()
{
    int n,a,s,r;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        s=0;
        while(a!=0)
        {
            r=a%10;
            s=s+r*r;
            a=a/10;
        }
        if(s>9)
        {
            a=s;
        }
    }
    if(s==1 || s==7)
    printf("True");
    else
    printf("False");
}