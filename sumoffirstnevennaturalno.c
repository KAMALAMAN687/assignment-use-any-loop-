#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("enter a no. : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {   
        c=2*b;
        d+=c;
    
    }
    printf("sum of first %d even natural no. is %d",a,d);

}