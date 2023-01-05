
#include<stdio.h>
int main()
{
    int m,n,i,a;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            a=m*i;
            printf("%d x %d = %d
",m,i,a);
        }
    }
}