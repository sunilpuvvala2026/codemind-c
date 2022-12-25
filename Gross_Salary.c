#include<stdio.h>
int main()
{
    int n;
    float da,hra,gross;
scanf("%d",&n);
if(n<10000)
{
    da=0.80*n;
    hra=0.20*n;
}
else if(n<=20000)
{
    da=0.90*n;
    hra=0.25*n;
}
    else
    {
        da=0.95*n;
        hra=0.30*n;
    }
gross=n+da+hra;
printf("%.2f",gross);
}