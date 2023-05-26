#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sqr = n * n;
    int sum = 0;
    while(sqr != 0){
        int r = sqr % 10;
        sum += r;
        sqr /= 10;
    }
    if(sum == n) printf("Neon Number");
    else printf("Not Neon Number");
}