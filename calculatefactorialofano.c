#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("enter a number: ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {

        c*=b;
    }
    printf("factorial of %d is %d",a,c);
    return 0;
}