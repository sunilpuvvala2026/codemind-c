#include<stdio.h>
int main()
{
 char c;
 scanf("%c",&c);
 int lower,upper;
 lower=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
 upper=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
 if(lower||upper)
 printf("VOWEL");
 else
 printf("CONSONANT");
}