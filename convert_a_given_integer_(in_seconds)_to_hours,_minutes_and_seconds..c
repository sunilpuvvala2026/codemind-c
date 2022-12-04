#include<stdio.h>
int main()
{
    int s,m,h;
    scanf("%d",&s);
    h=s/3600;
    m=(s-(3600*h))/60;
    s=(s-(3600*h)-(m*60));
    printf("H:M:S-%d:%d:%d",h,m,s);
    
}