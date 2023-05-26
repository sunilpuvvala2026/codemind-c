#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sqr = n * n;
    while(n != 0){
        if(n % 10 != sqr % 10){
            printf("Not an Automorphic Number");
            return 0;
        }
        n /= 10;
        sqr /= 10;
    }
    printf("Automorphic Number");
}