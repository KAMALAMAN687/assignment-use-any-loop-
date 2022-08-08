#include<stdio.h>
int main()
{
    int a,b=0;
    printf("enter a no. : ");
    scanf("%d",&a);
    while(1)
    {
        a/=10;
        b++;
        if(a==0)
        break;
    }
    printf("no. of digits in no. is %d",b);
    return 0;

}