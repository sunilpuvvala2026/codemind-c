#include<stdio.h>
int main()
{
    float bs,pf,hra,da,gross;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    gross=pf+bs+hra+da;
    printf("%.2f
",pf);
    printf("%.2f
",gross);
}