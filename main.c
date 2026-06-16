
#include <stdio.h>

int main()
{
   int a,b,sum,diff,division,modulus,mul;
   printf("enter the a value");
   scanf("%d",&a);
   printf("enter the b value");
   scanf("%d",&b);
   sum=a+b;
   diff=a-b;
   division=a/b;
   modulus=a%b;
   mul=a*b;
   printf("the sum is :%d",sum);
   printf(" \n the difference is :%d",diff);
   printf(" \n the division is: %d",division);
   printf(" \n the modulo division: %d",modulus);
   printf(" \n the multiplication is:%d",mul);
   return 0;
}
   