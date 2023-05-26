#include<stdio.h>
int Ispalindrome(int n){
    int sum = 0;
    int temp = n;
    while(temp != 0){
        sum = sum * 10 + (temp % 10);
        temp /= 10;
    }
    if (n == sum) return 1;
    else return 0;
}
int main(){
    int num;
    scanf("%d",&num);
    if(Ispalindrome(num) == 1) printf("True");
    else printf("False");
}