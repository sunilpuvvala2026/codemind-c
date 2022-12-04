#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    int divi=a/b;
    int rem=a%b;
    printf("Sum:%d
",sum);
    printf("Difference:%d
",sub);
    printf("Product:%d
",mul);
    printf("Quotient:%d
",divi);
    printf("Remainder:%d
",rem);
}