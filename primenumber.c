#include<stdio.h>
int main()
{

      int a;
      printf("enter a number : ");
      scanf("%d",&a);
     if(a<=3)
        {
            if(a<=3&&a>1)
        {
            printf("it is a prime number");
        }
        else 
        printf("prime no. starts from 2 and hence please enter no. greater than 1");
        }
     else
     {
        if(a%2==0||a%3==0)
        printf("not a prime no.");
        else
        printf("prime no.");
     }
    return 0;
}