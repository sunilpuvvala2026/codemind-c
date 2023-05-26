#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    int pro = 1;
    while(n != 0){
        sum += n % 10;
        pro *= n % 10;
        n /= 10;
    }
    if(sum == pro) printf("Spy Number");
    else printf("Not Spy Number");
}