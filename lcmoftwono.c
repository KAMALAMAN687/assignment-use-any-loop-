#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    for(c=1;c<=a*b;c++)
    {
        if(c%a==0&&c%b==0)
       {
       
        printf("lcm is %d",c);
        break;

        
       }
    }

    return 0;
}