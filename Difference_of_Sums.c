#include<stdio.h>
int main()
{
    int n,sqr,sub=0,sum=0,a,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        a=i*i;
        sum=sum+a;
        b=b+i;
        sqr=b*b;
    }
    printf("%d",sqr-sum);
}