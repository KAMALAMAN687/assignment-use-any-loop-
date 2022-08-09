#include<stdio.h>
int main()
{
    int a,rem,reverse=0 ;
    printf("enter a number : ");
    scanf("%d",&a);

    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        reverse=reverse*10+rem;
    }
    printf("reverse no.is %d",reverse);
}