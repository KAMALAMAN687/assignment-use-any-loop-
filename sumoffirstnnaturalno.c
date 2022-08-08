#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("enter a no.: ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        c+=b;
    }
    printf("sum of first %d natural no is %d",a,c);
    return 0;
}