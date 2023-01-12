#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        sum=sum*10+num;
        n=n/10;
    }
    printf("%d",sum);
}