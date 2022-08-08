#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("enter a no. : ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {   
        c=b*b;
        d+=c;
    
    }
    printf("sum of squares of first %d natural no. is %d",a,d);

}